#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;

    // this is also a comment
    printf("You are %d miles away.\n", distance);

    // printf - print to output
    // fprintf - print o output stream
    // dprintf - print to file descriptor
    // snprintf - print to string

    printf("%'.2f\n", 1234567.89);


    return 0;
}
