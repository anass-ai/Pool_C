#include <stdio.h>

long long fib_tail(int n, long long a, long long b)
{
    if (n == 0)
        return a;

    return fib_tail(n - 1, b, a + b);
}

long long fib(int n)
{
    return fib_tail(n, 0, 1);
}

int main()
{
    int n = 10;
    printf("Fib(%d) = %lld\n", n, fib(n));
    return 0;
}
