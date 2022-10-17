#include<stdio.h>
void main()
    {
     int a;
     scanf("%d",&a);
     int *ptr=&a;
     printf("%p\n",ptr);
     printf("%d\n",*ptr);
    }
