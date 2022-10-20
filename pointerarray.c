#include<stdio.h>
void integer(void);
void character(void);

void main(){
    integer();
    character();
}
void integer()
{
int array[4]={1,2,3,4};
int *pointer = array;
for(int i=0;i<4;i++){
printf("%d-",(pointer+i)); 
printf("%d\n",*(pointer+i)); 
}
}
void character(){
printf("\n");
char array[4]={'a','b','c','d'};
char *pointer = array;
for(int i=0;i<4;i++){
printf("%d-",(pointer+i)); 
printf("%c\n",*(pointer+i)); 
}
}
