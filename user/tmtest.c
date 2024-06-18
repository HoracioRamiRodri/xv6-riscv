#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {

    int x = timeins();
    sleep(1000);
    int y = timeins();

    printf("Time in seconds: %d\nTime in milliseconds: %d\n", (y - x), ((y - x) * 1000));


    return 0;
}