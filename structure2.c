//1.structure in c-program
#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int identNumber;
    float salary;
};
struct Person per1,per2;

int callPreson(){
    strcpy(per1.name ,"hitori");
    per1.identNumber = 10010;
    per1.salary = 1500;
    printf("IidentifiNumber  Name  salary \n");
    printf("%d",per1.identNumber);
    printf("           %s",per1.name);
    printf("  %.2f\n",per1.salary);
    strcpy(per2.name ," yue");
    per2.identNumber = 1568;
    per2.salary = 5000;
    printf("%d",per2.identNumber);
    printf("           %s",per2.name);
    printf("     %.2f\n",per2.salary);
    return 0;

}
