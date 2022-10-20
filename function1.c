#include<stdio.h>

// int sum();
// int sub();
void main()
{
 
 printf("enter 2 no's\n");
  sum();
       printf("enter 2 no's\n");
    sub();

}
int sum()
{
    int no1,no2,sum;
    scanf("%d %d",&no1,&no2);
    sum=no1+no2;
    printf("sum = %d\n",sum);
    
     }
int sub()
{
    int no1,no2,sub;
    scanf("%d %d",&no1,&no2);
    sub=no1-no2;
    printf("sub = %d",sub);
}