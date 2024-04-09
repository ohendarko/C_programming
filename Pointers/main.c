#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age);
    printf ("the value of pAge is: %p\n", pAge);
    printf("the value of age = %d\n", *pAge);
    *pAge = 43;
    printf("the new value of age is: %d\n", age);
    printf("the value of age = %d\n", age);

    return 0;
}
