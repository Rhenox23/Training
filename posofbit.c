#include<stdio.h>
void main()
{
    int no;
    scanf("%d",&no);
    int zero=0,one=0,mask=1,zero_pos=0,one_pos=0;
    for(int i=0;i<=7;i++)
      {
       if((no & mask)==0)
       {
        zero++;
       zero_pos=(zero_pos*10)+i;
       }
       else{
       one++;
       one_pos=(one_pos*10)+i;
       }
       no>>=1;
    }
printf("zero postion=%d \none's position=%d",zero_pos,one_pos);
}