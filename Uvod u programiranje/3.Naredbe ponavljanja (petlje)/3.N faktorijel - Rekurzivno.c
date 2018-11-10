//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/03_nfaktorijel

#include <stdio.h>

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", fact(n));
}