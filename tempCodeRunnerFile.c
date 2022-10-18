#include<stdio.h>
void main()
{
   int number=10;
   int *num_pointer= &number;
   char character[ ]="sacra";
   char *character_pointer= character; 
   printf("%d\n",number);
   printf("%p\n",&num_pointer);
   printf("%s\n",character);
   printf("%p\n",character_pointer);

}