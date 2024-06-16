#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[]) {

    int time = uptime();

    int ret_val = fork();

    if (ret_val < 0) {
        printf("Error\n");
        return 1;
    } 
    else if (ret_val == 0) {
        exec(argv[1], &argv[2]);
    }
    else {
        wait(0);
        int newTime = uptime();
        printf("Real-time in ticks: %d\n", ((newTime - time) * 100));
    }    

    return 0;
}