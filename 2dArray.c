#include<stdio.h>
void main()
{
    int DoubleArray[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *DoubleArrayPointer=&DoubleArray[0][0];
    int count=0;
    for(int row=0;row<9;row++)
        {
          printf("%d = ",((DoubleArrayPointer+row)));
          printf("%d ",*((DoubleArrayPointer+row)));
          count++;
          if(count==3){
          printf("\n");
          count=0;
          }
        
    }   

}