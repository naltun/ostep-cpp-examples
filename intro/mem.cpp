#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>  // man 2 getpid

#include "common.h"

int main(int argc, char *argv[]) {
    // typecast void* to int*, and give us the address
    int *p = (int*) malloc(sizeof(int));
    assert(p != NULL);
    printf("(%d) address pointed to by p: %p\n", getpid(), p);

    *p = 0;
    while (1)
    {
        Spin(1);
        *p = *p + 1;
        printf("(%d) p: %d\n", getpid(), *p);
    }

    return 0;
}
