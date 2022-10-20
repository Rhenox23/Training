// #include<stdio.h>
// void main()
// {
//     char string[]= "sacra";
//     printf("%s",string);
// }

#include<stdio.h>
void main()
{
    char string[30];
    scanf("%[^\n]s",string);
    printf("%s",string);
}