#
# Copyright 2008 Ettus Research LLC
# 
# GNU Radio is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
# 
# GNU Radio is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with GNU Radio; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.
# 

proc set_props {process options} {
	if ![string compare $options ""] {
		return
	}
	set state 1
	foreach opt $options {
		if $state {
			set key $opt
			set state 0
		} else {
			puts ">>> Setting: $process\[$key\] = $opt" 
			if ![string compare $process "Project"] {
				project set $key $opt
			} else {
				project set $key $opt -process $process
			}
			set state 1	
		}
	}
}

if [file isfile $env(ISE_FILE)] {
	puts ">>> Opening project: $env(ISE_FILE)"
	project open $env(ISE_FILE)
} else {	
	puts ">>> Creating project: $env(ISE_FILE)"
	project new $env(ISE_FILE)
	
	##################################################
	# Set the project properties
	##################################################
	set_props "Project" $env(PROJECT_PROPERTIES)
	
	##################################################
	# Add the sources
	##################################################
	foreach source $env(SOURCES) {
		puts ">>> Adding source to project: $source"
		xfile add $source
	}
	
	##################################################
	# Add the custom sources
	##################################################
	foreach source $env(CUSTOM_SRCS) {
		puts ">>> Adding custom source to project: $source"
		xfile add $source -include_global
	}
	
	##################################################
	# Set the top level module
	##################################################
	project set top $env(TOP_MODULE)
	
	##################################################
	# Set the process properties
	##################################################
	set_props "Synthesize - XST" $env(SYNTHESIZE_PROPERTIES)
	set_props "Translate" $env(TRANSLATE_PROPERTIES)
	set_props "Map" $env(MAP_PROPERTIES)
	set_props "Place & Route" $env(PLACE_ROUTE_PROPERTIES)
	set_props "Generate Post-Place & Route Static Timing" $env(STATIC_TIMING_PROPERTIES)
	set_props "Generate Programming File" $env(GEN_PROG_FILE_PROPERTIES)
	set_props "Generate Post-Place & Route Simulation Model" $env(SIM_MODEL_PROPERTIES)
}

if [string compare [lindex $argv 0] ""] {
	puts ">>> Running Process: [lindex $argv 0]"
	process run [lindex $argv 0]
}

project close
exit


