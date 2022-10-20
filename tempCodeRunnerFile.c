#include<stdio.h>
void main()
{
char array[4]={'a','b','c','d'};
char *pointer = array;
int i;
for(i=0;i<4;i++){
printf("%d-",(pointer+i)); 
printf("%c\n",*(pointer+i)); 
}
}
