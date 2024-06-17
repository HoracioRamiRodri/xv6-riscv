#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {

    int x = timeins();
    printf("Num: %d\n", x);

    sleep(1000);
    int y = timeins();
    printf("New num: %d\n", y);

    int difference = y - x;

    printf("Time in seconds: %d\n", difference);


    return 0;
}