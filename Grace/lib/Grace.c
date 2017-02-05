#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#define STRING "#include <unistd.h>%c#include <fcntl.h>%c#include <stdio.h>%c#define STRING %c%s%c%c#define WRITE void print(int fd){dprintf(fd, STRING,10,10,10,34,STRING,34,10,10,34,34,10,10,10,10);};%c#define TOTO int main(){int fd = open(%c./Grace_kid.c%c, O_CREAT | O_RDWR, S_IRWXU); print(fd); return 0;}%cWRITE%cTOTO%c/*Commentaire*/%c"
#define WRITE void print(int fd){dprintf(fd, STRING,10,10,10,34,STRING,34,10,10,34,34,10,10,10,10);};
#define TOTO int main(){int fd = open("./Grace_kid.c", O_CREAT | O_RDWR, S_IRWXU); print(fd); return 0;}
WRITE
TOTO
/*Commentaire*/
