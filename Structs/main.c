#include <stdio.h>
#include <stdlib.h>


struct Student{
    char name [50];
    char major[50];
    int age;
    double gpa;

};

int main()
{

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 22;
    student2.gpa = 3.84;
    strcpy(student2.name, "King");
    strcpy(student2.major, "Pharmacy");


    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Major: %s\n", student1.major);
    printf("GPA: %f\n", student1.gpa);

    printf("\nName: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Major: %s\n", student2.major);
    printf("GPA: %f", student2.gpa);




    return 0;
}
