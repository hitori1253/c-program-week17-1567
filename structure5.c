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
    person per[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("Enter identNumber : ");
        scanf("%d",&(per[i].identNumber));
        
        printf("Enter name : ");
        scanf("%s",&(per[i].name));
        
        printf("Enter salary : ");
        scanf("%f",&(per[i].salary));
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("%d : %s : %f\n",per[i].identNumber,per[i].name,per[i].salary);
    }
    return 0;
}
