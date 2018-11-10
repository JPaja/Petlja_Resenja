//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/07_izbacivanjecifre

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int broj = 0;
    int mnozilac = 1;
    while (a)
    {
        int cifra = a % 10;
        a /= 10;
        if (cifra == b)
            continue;
        broj += cifra * mnozilac;
        mnozilac *= 10;
    }
    printf("%d", broj);
}