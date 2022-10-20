#include<stdio.h>
int main()
{
    int a;
    int* ptr=&a;
    printf("%p\n %d",ptr,a);
}