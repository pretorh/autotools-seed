#include "../src/factorial.h"
#include <stdio.h>

#define ok(in, pass) \
    printf("%s %d - factorial(%d)\n", (pass) ? "ok" : "not ok", ++tests, in)

int main() {
    int tests = 0;
    ok(1, factorial(1) == 1);
    ok(2, factorial(2) == 2);
    ok(3, factorial(3) == 6);
    ok(10, factorial(10) == 3628800);
    printf("1..%d\n", tests);
    return 0;
}
