//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/04_slucajan_broj_deljiv_sa_k

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    srand(time(0));
    n = (n + k - 1) - ~(k - 1); //dodaje kolko fali da n bude deljivo sa k
    m -= m % k;
    printf("%d", n + (rand() % (m / n + 1)) * k);
}