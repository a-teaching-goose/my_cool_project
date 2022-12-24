#include <algorithm>


int fib(int n) {
    if (n <= 1) {
        return std::max(0, n);
    }

    // O(1) for space
    int v2 = 1;
    int v1 = 0;

    // O(n) for time
    for (int i = 2; i <= n; ++i) {
        int v3 = v1 + v2;
        v1 = v2;
        v2 = v3;
    }

    return v2;
}
