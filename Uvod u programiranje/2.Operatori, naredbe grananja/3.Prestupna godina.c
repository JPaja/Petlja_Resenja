//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/03_prestupna_godina

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf(a % 400 == 0 || a % 100 && a % 4 == 0 ? "DA" : "NE");
}
