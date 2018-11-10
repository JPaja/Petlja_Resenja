//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/08_konverzija_vremena

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int s = a % 60;
    int m = (a /= 60) % 60;
    int h = (a / 60) % 60;
    printf("%d %d %d", h, m, s);
}
