#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int main(){int i = 5;char stra[128];sprintf(stra, "%s%d%s","Sully_", i, ".c");--i;int fd = open(stra, O_CREAT | O_RDWR, S_IRWXU);char *str="#include <unistd.h>%c#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%cint main(){int i = %d;char stra[128];sprintf(stra, %c%%s%%d%%s%c,%cSully_%c, i, %c.c%c);--i;int fd = open(stra, O_CREAT | O_RDWR, S_IRWXU);char *str=%c%s%c; dprintf(fd, str,10,10,10,10,i,34, 34, 34, 34, 34, 34,34,str,34,34,34,34,34,34,34,10);char ptr[128];system(%cgcc -Werror -Wextra -Wall -o Sully_5 Sully_5.c%c);sprintf(ptr, %cgcc -Werror -Wall -Wextra -o Sully_%%d %%s && ./Sully_%%d%c, i, stra, i);close(fd);if(i >=0){system(ptr);system(%crm -fr ./Sully_-1.c%c);}return 0;}%c";dprintf(fd, str,10,10,10,10,i,34, 34, 34, 34, 34, 34,34,str,34,34,34,34,34,34,34,10);char ptr[128];system("gcc -Werror -Wextra -Wall -o Sully_5 Sully_5.c");sprintf(ptr, "gcc -Werror -Wall -Wextra -o Sully_%d %s && ./Sully_%d", i, stra, i);close(fd);if(i >=0){system(ptr);system("rm -fr ./Sully_-1.c");}return 0;}
