//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/05_izvrnutibroj

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int d = n;
    int palindrom = 0;
    while (1)
    {
        palindrom += d % 10;
        d /= 10;
        if (d == 0)
            break;
        palindrom *= 10;
    }
    printf("%d", palindrom);
}