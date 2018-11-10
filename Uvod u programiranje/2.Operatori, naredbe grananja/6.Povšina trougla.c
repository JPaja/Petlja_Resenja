//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/06_povrsina_trougla

#include <stdio.h>

int main()
{
    float a1, b1, a2, b2;
    scanf("%f%f%f%f", &a1, &b1, &a2, &b2);

    float p1 = (a1 * b1) / 2;
    float p2 = (a2 * b2) / 2;
    printf("%d", p1 == p2 ? 0 : p1 > p2 ? 1 : 2);
}