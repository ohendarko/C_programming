#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <process.h>

int main(int argc, char* argv[])
{
    char* arr[] = {
        "ping",
        "google.com",
        NULL};

    char* env[] = {
        "TEST=environment variable",
        NULL
    };

    _execlp(
            "ping",
            "ping",
            "google.com",
            NULL);

     _execlpe(
            "ping",
            "ping",
            "google.com",
            NULL,
            env);

    _execv(
           "ping",
           arr)

    _execvpe("ping",
           arr,
           env);

    _execve(
            "C:\\Windows\\System32",
            arr,
            env)

    printf("ping.exe failed to run");
    return (0);
}
