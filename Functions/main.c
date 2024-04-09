#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Top\n");
    sayHi ("Don", 54);
    sayHi ("Han", 19);
    sayHi ("Asala", 103);
    printf("Bottom");
    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);

}
