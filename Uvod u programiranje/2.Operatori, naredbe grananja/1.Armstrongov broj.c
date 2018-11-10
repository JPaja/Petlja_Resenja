//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/01_armstrongov_broj

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    int d = a;
    int armstrong = 0;
    while (d != 0)
    {
        armstrong += pow(d % 10, 3);
        d /= 10;
    }
    printf(a == armstrong ? "DA" : "NE");
}
