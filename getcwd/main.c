#include <stdio.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>

int main(void)
{
    char buffer[10];
    char* retptr = _getcwd(NULL, 1024);
    //If there is a problem getting the current working directory,
    //the function will return NULL.
    if (retptr == NULL)
    {
        printf("Get current working directory failed.\n");
        if (errno == ERANGE)
        {
            printf("Path exceeds max buffer length.\n");
        }
        else if (errno == ENOMEM)
            printf("Memory cannot be allocated for path.\n");
        return 1;
    }
    printf("Current working directory: \n\n%s\n", retptr);
    free(retptr);
        return 0;
}
