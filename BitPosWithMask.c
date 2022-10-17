#include<stdio.h>
void main()
{
    int no,sum=0,sum1=0,sum2=0,mask=8,bit=1;
    scanf("%d",&no);
    sum1=(no&mask);
    sum=sum+((sum1>>3)&bit);
    mask=mask<<1;
    bit=bit<<1;
    sum2=(no&mask);
    sum=sum+((sum2>>3)&bit);
    printf("%d",sum);
}
