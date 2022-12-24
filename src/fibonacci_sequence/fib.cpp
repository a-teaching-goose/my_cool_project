int fib(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int *data = new int[n + 1]; // why +1?
    data[0] = 0;
    data[1] = 1;

    for (int i = 2; i <= n; ++i) {
        data[i] = data[i - 1] + data[i - 2];
    }

    int ret = data[n];

    delete[]data;   // make sure new'd memory is deleted to prevent memory leak

    return ret;
}