//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/03_nfaktorijel

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int resenje = 1;
    for (int i = 2; i <= n; i++)
        resenje *= i;
    printf("%d", resenje);
}
