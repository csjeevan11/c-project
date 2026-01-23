#include <assert.h>
#include "functions.h"

int main() {
    assert(biggest_of_three(3, 5, 1) == 5);
    assert(biggest_of_three(10, 2, 3) == 10);

    assert(factorial_calc(5) == 120);
    assert(factorial_calc(0) == 1);
    assert(factorial_calc(-1) == -1);

    return 0;
}

