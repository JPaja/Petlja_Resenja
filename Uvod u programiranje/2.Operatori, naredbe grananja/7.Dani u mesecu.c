//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/07_dani_u_mesecu

#include <stdio.h>

int main()
{
    int m, g;
    scanf("%d%d", &m, &g);
    int dana = 0;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dana = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        dana = 30;
        break;
    case 2:
        dana = g % 400 == 0 || g % 100 && g % 4 == 0 ? 29 : 28;
        break;
    }

    printf("%d", dana);
}