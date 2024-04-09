#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Ohene Darko");

    fclose(pF);
    return (0);
}
