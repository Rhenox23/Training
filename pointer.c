#include<stdio.h>
void main()
    {
     int n;
     scanf("%d",&n);
     int *ptr=&n;
     printf("%d\n",ptr);
     printf("%d\n",*ptr);
     printf("%d\n",n);
     printf("%d\n",&n);
    }
