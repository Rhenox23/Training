#include<stdio.h>
int add();
int sub();
int multiply();
int divide();
void main()
{
  int x,y; 
  printf("Enter the input : ");
  scanf("%d %d",&x,&y);
  printf("add=%d\n",add(x,y));
  printf("subtract=%d\n",sub(x,y));
  printf("multiply=%d\n",multiply(x,y));
  printf("divide=%d\n",divide(x,y));

}

int add(int x,int y){
int sum=x+y;
return sum;
}

int sub(int x,int y)
{
int sub=x-y;
return sub;
}

int multiply(int x,int y)
{
int multiply=x*y;
return multiply;
}

int divide(int x,int y){
int divide=x/y;
return divide;
}