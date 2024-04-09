#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 5, 65, 70, 78};
    luckyNumbers[1] = 200;
    printf("%d", luckyNumbers[1]);

    return 0;
}
