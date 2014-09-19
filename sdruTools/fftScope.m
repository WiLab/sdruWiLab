function fftScope()

coder.extrinsic('dsp.SpectrumAnalyzer');

SampleRate = 0.5e6;
DecimationFactor = 100e6/SampleRate;

SDRu = comm.SDRuReceiver('192.168.10.2', ...
    'CenterFrequency', 900e6, ...
    'DecimationFactor', DecimationFactor);

Scope = dsp.SpectrumAnalyzer('SampleRate',SampleRate,...
    'CenterFrequency',SDRu.CenterFrequency);

%try
    for k=1:1e8
        data = step(SDRu);
        step(Scope,data);
    end
%catch
%    release(SDRu);release(Scope);
%end
release(SDRu);release(Scope);



end