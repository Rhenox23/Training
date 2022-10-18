#include<stdio.h>
void main()
{
   int number=10;
   int *num_pointer= &number;
    char character='S';
    char *character_pointer=&character; 
     char  string[ ]="sacra";
     char *string_pointer=string; 
     printf("%d\n",number);
     printf("%p\n",&num_pointer);
    printf("%c\n",character);
    printf("%p\n",character_pointer);
   printf("%s\n",string);
   printf("%p\n",string_pointer);

}