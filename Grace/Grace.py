#comment
file = open("Grace_kid.py", "w");
str = '#comment%cfile = open("Grace_kid.py", "w");%cstr = %c%s%c%cfile.write(str %% (10,10,39,str,39,10,10))%c'
file.write(str % (10,10,39,str,39,10,10))
