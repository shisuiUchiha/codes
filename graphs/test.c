#include<stdio.h>
void main(){
int i;
float a=5.2;
char *ptr;
ptr=(char *)&a;
for(i=0;i<=3;i++)
printf('%d',*ptr++);
}


