#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char *env = getenv("PATH");
    printf("%s", env);
    return 0;
}
