//1.structure in c-program
#include<stdio.h>
#include<string.h>
typedef struct Person{
    char name[50];
    int identNumber;
    float salary;
}person;
//struct Person per1,per2;



int callPreson(){
    person p1;
    strcpy(p1.name ,"hitori");
    p1.identNumber = 10010;
    p1.salary = 1500;
    printf("IidentifiNumber  Name  salary \n");
    printf("%d",p1.identNumber);
    printf("           %s",p1.name);
    printf("  %.2f\n",p1.salary);
    person p2;
    strcpy( p2.name ," yue");
    p2.identNumber = 1568;
    p2.salary = 5000;
    printf("%d",p2.identNumber);
    printf("           %s",p2.name);
    printf("     %.2f\n",p2.salary);
    return 0;

}
