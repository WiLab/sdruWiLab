function output = codegenMe

h = PHYReceiver;
h.HWAttached=true;

output = step(h,complex(1,1));

end
