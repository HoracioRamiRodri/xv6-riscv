#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[]) {

    int time = uptime(); // Get the current time

    int ret_val = fork(); // Create child process

    if (ret_val < 0) { // Check if child process was created successfully
        printf("Error: Child process couldn't be created\n");
        return 1; // If unsuccessful, print error message then return 1
    } 
    else if (ret_val == 0) { // If successful, then pass command line args to exec
        exec(argv[1], &argv[2]);
    }
    else { 
        wait(0); // Wait for child process to finish
        int newTime = uptime(); // Get new uptime
        printf("Real-time in ticks: %d\n", (newTime - time)); // Find the difference
                                                              // and return result in ticks.
    }    

    return 0;
}