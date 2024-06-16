#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[]) {

    int ret_val = fork();
    if (ret_val < 0) {
        printf("Error\n");
        return 1;
    } 
    else if (ret_val == 0) {
        printf("Child PID: %d\n", getpid());
    }
    else {
        int ret_val_wait = wait(NULL);
        printf("Parent PID: %d", )
    }


    return 0;
}