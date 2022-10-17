#include<stdio.h>
void main()
{
    int no;
    scanf("%d",&no);
    int zero=0,one=0,mask=1;
    for(int i=1;i<=8;i++)
    {
       if((no & mask)==0)
       zero++;
       else
       one++;
       no=no>>1;
    }
    printf("zero's = %d \none's = %d",zero, one);

}