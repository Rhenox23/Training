#include<stdio.h>
void main()
{
int number;
scanf("%d",&number);
int *pointer=&number;
int **pointer1=&pointer;
printf("%d\n",pointer);
printf("%d\n",*pointer);
printf("%d\n",**pointer1);
printf("%d\n",pointer1);
}
