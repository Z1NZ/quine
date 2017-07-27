import sys, os
i = 5;
if i == -1:
    sys.exit(-1)
file = open("Sully_%d.py" % (i), "w");
i -= 1
str = 'import sys, os%ci = %d;%cif i == -1:%c    sys.exit(-1)%cfile = open(%cSully_%%d.py%c %% (i), %cw%c);%ci -= 1%cstr = %c%s%c%cfile.write(str %% (10, i, 10, 10, 10, 34, 34, 34, 34, 10, 10, 39, str, 39, 10, 10, 10, 34, 34, 10))%cfile.close();%cif (i > -1):os.system(%cpython Sully_%%d.py%c %% (i + 1))%c'
file.write(str % (10, i, 10, 10, 10, 34, 34, 34, 34, 10, 10, 39, str, 39, 10, 10, 10, 34, 34, 10))
file.close();
if (i > -1):os.system("python Sully_%d.py" % (i + 1))
