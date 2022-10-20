#include<stdio.h>
void main()
{
   int number=10;
   int *num_pointer= &number;
    printf("%d\n",number);
    printf("%p\n",&num_pointer);

    char character='S';
    char *character_pointer=&character;
    printf("%c\n",character);
    printf("%p\n",character_pointer);
 

     char  string[ ]="sacra";
     char *string_pointer=string; 
     printf("%s\n",string);
    printf("%p\n",string_pointer);

}