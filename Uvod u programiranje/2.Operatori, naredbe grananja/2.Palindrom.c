//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/02_palindrom

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int d = a;
    int palindrom = 0;
    while (1)
    {
        palindrom += d % 10;
        d /= 10;
        if (d == 0)
            break;
        palindrom *= 10;
    }
    printf(a == palindrom ? "DA" : "NE");
}
