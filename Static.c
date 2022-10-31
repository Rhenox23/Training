#include<stdio.h>
void main()
{
    int a=5;
    static int b=10;
    printf("a=%d\nb=%d\n",&a,&b);
    printf("%d\n%d\n",a,b);
    a=a+b;
    b=b+a;
    printf("%d\n%d\n",a,b);
    printf("a=%d\nb=%d\n",&a,&b);
}