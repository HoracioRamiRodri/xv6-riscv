#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {

    timeins();
    sleep(1000);
    timeins();

    return 0;
}