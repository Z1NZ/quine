#include<stdio.h>
/*tototest*/
int toto(){return(1);}
int main(){/*testtoto*/char*a="#include<stdio.h>%c/*tototest*/%cint toto(){return(1);}%cint main(){/*testtoto*/char*a=%c%s%c;printf(a,10,10,10,34,a,34);toto();}";printf(a,10,10,10,34,a,34);toto();}