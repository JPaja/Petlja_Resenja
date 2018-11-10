//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/10_izvrnuti_cetvorocifreni_broj

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    int resenje = 0;
    for (int i = 3; i >= 0; i--)
    {
        resenje += (a % 10) * pow(10, i);
        a /= 10;
    }
    printf("%d", resenje);
}
