#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int main(){int i = 5; char stra[128];sprintf(stra, "%s%d%s","Sully_", --i, ".c");int fd = open(stra, O_CREAT | O_RDWR, S_IWOTH);char *str="#include <unistd.h>%c#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%cint main(){int i = %d; char stra[128];sprintf(stra, %c%%s%%d%%s%c,%cSully_%c, --i, %c.c%c);int fd = open(stra, O_CREAT | O_RDWR, S_IWOTH);char *str=%c%s%c; printf(str,10,10,10,10,i,34, 34, 34, 34, 34, 34,34,str,34,34,34);char ptr[128]; sprintf(ptr, %cgcc -Werror -Wall -Wextra -o Sully_%%d %%s%c, i, stra);close(fd);sleep(1);if(i >0){system(ptr);}return 0;return 0;}"; dprintf(fd, str,10,10,10,10,i,34, 34, 34, 34, 34, 34,34,str,34,34,34);char ptr[128]; sprintf(ptr, "gcc -Werror -Wall -Wextra -o Sully_%d %s && ./Sully_%d", i, stra, i);close(fd);sleep(1);if(i >0){system(ptr);}return 0;}