//an integer array of 5 elements and print their values
#include<stdio.h>
void main()
{
    int array[5],index;
    for(index=0;index<5;index++){
    scanf("%d",&array[index]);
    }
    printf("The numbers are :\n");
    for(index=0;index<5;index++){
    printf("%d\n",array[index]);
    }
}