#include<stdio.h>
void main()
{
int array[4]={1,2,3,4};
int *pointer = array;
int i;
for(i=0;i<4;i++){
printf("%d-",(pointer+i)); 
printf("%d\n",*(pointer+i)); 
}
}
