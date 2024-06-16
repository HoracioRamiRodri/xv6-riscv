#include <stdio.h>

int main(int argc, char* argv[]) {

    int retval = fork();
    printf("Created child process\n");

    return 0;
}