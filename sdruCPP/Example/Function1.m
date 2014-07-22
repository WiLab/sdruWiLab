function [ output ] = Function1(  ) %#codegen

output = randn(1)*2;

h=comm.SDRuReceiver('OutputDataType','double');
step(h);
release(h);

end

