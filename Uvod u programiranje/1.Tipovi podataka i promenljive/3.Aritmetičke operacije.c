//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/03_aritmeticke_operacije

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d %d %d %d", a + b, a - b, a * b, a / b, a % b);
}
