//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/02_fibionacijevbroj

#include <stdio.h>

int fib(int n)
{
    if (n < 3)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
}