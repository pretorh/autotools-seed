#include "factorial.h"

int factorial(int i) {
    if (i <= 2)
        return i;
    return factorial(i - 1) * i;
}
