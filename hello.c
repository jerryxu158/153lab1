#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char*argv[]){
    printf(1, "hello world %d\n", add());
    int* ptr1 = 0;

    waitpid(123, ptr1, 0);
    exit(1);
}
