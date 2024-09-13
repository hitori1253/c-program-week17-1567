//1.structure in c-program
#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int identNumber;
    float salary;
};
//struct Person per1,per2;

struct child{
    struct Person Person, person2;
    int age;
    
}child1;

int callPreson(){
    strcpy(child1.Person.name ,"hitori");
    child1.Person.identNumber = 10010;
    child1.Person.salary = 1500;
    printf("IidentifiNumber  Name  salary \n");
    printf("%d",child1.Person.identNumber);
    printf("           %s",child1.Person.name);
    printf("  %.2f\n",child1.Person.salary);
    strcpy(child1.person2.name ," yue");
    child1.person2.identNumber = 1568;
    child1.person2.salary = 5000;
    printf("%d",child1.person2.identNumber);
    printf("           %s",child1.person2.name);
    printf("     %.2f\n",child1.person2.salary);
    return 0;

}
