//structure in c-program
#include "structure5.c"
#include <stdio.h>
void display(int count);
void main(){
    printf("structure\n");
    display(30);
    callPreson();
}

void display(int count){
    for (int i = 0; i < count; i++)
    {
        printf("=");
    }
    printf("\n");
    
}