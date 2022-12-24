#include "gtest/gtest.h"
#include "fibonacci_sequence/fib.h"
#include "util.h"

TEST(fib, edge_cases) {

    for (int i = -10; i < 0; i++) {
        int actual = fib(i);

        ASSERT_EQ(0, actual) << case_string(i);
    }
}

TEST(fib, normal_cases) {
    int expect[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
                    89, 144, 233, 377, 610, 987, 1597, 2584,
                    4181, 6765, 10946, 17711, 28657, 46368, 75025,
                    121393, 196418, 317811};

    int size = sizeof(expect) / sizeof(expect[0]);

    for (int i = 0; i < size; i++) {
        int actual = fib(i);

        ASSERT_EQ(expect[i], actual) << case_string(i);
    }
}
