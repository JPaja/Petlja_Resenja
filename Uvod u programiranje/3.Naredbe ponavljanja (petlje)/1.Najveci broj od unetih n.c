//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/01_najveciodn

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int max = 0x80000000; //naj manji broj => 1000 0000 0000 0000 0000 0000 0000 0000
    for (int i = 0; i < n; i++)
    {
        int broj;
        scanf("%d", &broj);
        if (broj > max)
            max = broj;
    }
    printf("%d", max);
}