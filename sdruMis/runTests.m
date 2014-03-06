% Build Test
%compilesdru('testFileSourceSink','mex');
codegen testFileSourceSink

% Run Tests
testFileSourceSink_mex;