#include <stdio.h>
#include "factorial.h"

int main(int argc, const char *argv[]) {
    printf("%s: got %d args\n", argv[0], argc);
    int x = argc * 3;
    printf("factorial(%d) = %d\n", x, factorial(x));
    return 0;
}
