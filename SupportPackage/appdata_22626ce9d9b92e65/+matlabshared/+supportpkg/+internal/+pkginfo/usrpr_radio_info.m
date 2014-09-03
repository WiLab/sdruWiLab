function supportpkg = usrpr_radio_info()
%USRPR_RADIO_INFO Return Communications System Toolbox Support Package for USRP(R) Radio information.

%   Copyright 2014 The MathWorks, Inc.

supportpkg = hwconnectinstaller.SupportPackage();
supportpkg.Name          = 'USRP(R) Radio';
supportpkg.Version       = '14.1.0';
supportpkg.Platform      = 'PCWIN,PCWIN64,GLNXA64,MACI64';
supportpkg.Visible       = '1';
supportpkg.FwUpdate      = '';
supportpkg.Url           = '/home/travis/git/best/sdruWiLab/SupportPackage/downloads/sdru_download';
supportpkg.DownloadUrl   = 'http://sharepoint/dev/spc/verdeploy/installer/Documents/target_packages';
supportpkg.LicenseUrl    = '';
supportpkg.BaseProduct   = 'Communications System Toolbox';
supportpkg.AllowDownloadWithoutInstall = true;
supportpkg.FullName      = 'Communications System Toolbox Support Package for USRP(R) Radio';
supportpkg.DisplayName      = 'USRP(R) Radio';
supportpkg.SupportCategory      = 'hardware';
supportpkg.CustomLicense = 'yes';
supportpkg.CustomLicenseNotes = 'This utility enables you to download and install the third party software listed above. This software contains open source software licensed under the terms of the General Public License and other licenses. Consult each file for the specific license that applies to that file.\n\nIf you click ''Install'' on the next screen, you will be downloading and installing the software listed above.\n\nIf you click ''Cancel'' you will not be downloading and installing the software.';
supportpkg.ShowSPLicense = false;
supportpkg.Folder        = 'sdru';
supportpkg.Release       = '(R2014a)';
supportpkg.DownloadDir   = '/home/travis/git/best/sdruWiLab/SupportPackage/downloads/sdru_download';
supportpkg.InstallDir    = '/home/travis/git/best/sdruWiLab/SupportPackage';
supportpkg.IsDownloaded  = 0;
supportpkg.IsInstalled   = 1;
supportpkg.RootDir       = '/home/travis/git/best/sdruWiLab/SupportPackage/sdru';
supportpkg.DemoXml       = 'sdrudemos/demos.xml';
supportpkg.ExtraInfoCheckBoxDescription       = '';
supportpkg.ExtraInfoCheckBoxCmd       = '';
supportpkg.FwUpdate      = '';
supportpkg.PreUninstallCmd      = '';
supportpkg.Path{1}      = '/home/travis/git/best/sdruWiLab/SupportPackage/sdru';
supportpkg.Path{2}      = '/home/travis/git/best/sdruWiLab/SupportPackage/sdru/usrp_uhd_mapi';
supportpkg.Path{3}      = '/home/travis/git/best/sdruWiLab/SupportPackage/sdru/sdrudemos';
supportpkg.Path{4}      = '/home/travis/git/best/sdruWiLab/SupportPackage/sdru/sdrumex';
supportpkg.Path{5}      = '/home/travis/git/best/sdruWiLab/SupportPackage/sdru/uhdapps';
supportpkg.Path{6}      = '/home/travis/git/best/sdruWiLab/SupportPackage/sdru/fpgatarget';
supportpkg.Path{7}      = '/home/travis/git/best/sdruWiLab/SupportPackage/sdru/bin/glnxa64';

% Third party software information
supportpkg.TpPkg(1) = hwconnectinstaller.ThirdPartyPackage('USRP(R) source code', 'https://github.com/EttusResearch/UHD-Mirror');
supportpkg.TpPkg(1).Url        = 'https://github.com/EttusResearch/UHD-Mirror';
supportpkg.TpPkg(1).DownloadUrl = 'https://github.com/EttusResearch/UHD-Mirror/zipball/release_003_005_001';
supportpkg.TpPkg(1).LicenseUrl = '';
supportpkg.TpPkg(1).FileName = 'EttusResearch-UHD-Mirror-release_003_005_001-0-gf3a1698.zip';
supportpkg.TpPkg(1).DestDir = 'EttusResearch-UHD-Mirror-4f9b649';
supportpkg.TpPkg(1).Installer = '';
supportpkg.TpPkg(1).Archive = 'EttusResearch-UHD-Mirror-release_003_005_001-0-gf3a1698.zip';
supportpkg.TpPkg(1).DownloadDir = '/home/travis/git/best/sdruWiLab/SupportPackage/downloads/sdru_download';
supportpkg.TpPkg(1).InstallDir = '/home/travis/git/best/sdruWiLab/SupportPackage';
supportpkg.TpPkg(1).IsDownloaded = 0;
supportpkg.TpPkg(1).IsInstalled = 1;
supportpkg.TpPkg(1).InstallCmd = '';
supportpkg.TpPkg(1).RemoveCmd = 'matlab:rmdir(fullfile(''$(INSTALLDIR)'',''$(DESTDIR)''), ''s'')';
supportpkg.TpPkg(1).RootDir = '/home/travis/git/best/sdruWiLab/SupportPackage/EttusResearch-UHD-Mirror-4f9b649';
supportpkg.TpPkg(1).PreviouslyInstalled = 0;
