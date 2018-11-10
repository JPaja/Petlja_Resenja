//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/04_aritmetickasredinadelioca

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int zbir = n + 1; //uvek je deljivo sa n i 1
    int delioca = 2;
    for (int i = 2; i < n; i++)
    {
        if (n % i)
            continue;
        zbir += i;
        delioca++;
    }
    printf("%.2f", zbir / (float)delioca);
}