#include<stdio.h>
void main()
    {
     int n;
     scanf("%d",&n);
     int *ptr=&n;
     printf("%p\n",ptr);
     printf("%d\n",*ptr);
    }
