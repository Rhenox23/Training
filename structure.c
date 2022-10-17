#include <stdio.h>
 
struct employee{
    char name[30];
    int empId;
    int age;
};
int main()
{
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name ?:"); 
    scanf("%s",emp.name);         
    printf("ID ?:");   
    scanf("%d",&emp.empId);        
    printf("age ?:");  
    scanf("%d",&emp.age);    

    printf("\nEntered detail is:\n");
    printf("Name: %s\n",emp.name);
    printf("Id: %d\n",emp.empId);
    printf("age: %d\n",emp.age);
    return 0;
}

