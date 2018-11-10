//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/06_odredjivanjeostatka

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    while (a > b)
        a -= b;
    printf("%d", a);
}