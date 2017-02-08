import sys, os
i = 5;
i -= 1
file = open("Sully_%d.py" % (i), "w");
str = 'import sys, os%ci = %d;%ci -= 1%cfile = open(%cSully_%%d.py%c %% (i), %cw%c);%cstr = %c%s%c%cfile.write(str %% (10, i, 10, 10, 34, 34, 34, 34, 10, 39, str, 39, 10, 10, 10, 34, 34, 10))%cfile.close();%cif (i > 0):os.system(%cpython Sully_%%d.py%c %% (i))%c'
file.write(str % (10, i, 10, 10, 34, 34, 34, 34, 10, 39, str, 39, 10, 10, 10, 34, 34, 10))
file.close();
if (i > 0):os.system("python Sully_%d.py" % (i))
