//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/09_slucajan_broj

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    srand(time(0));
    printf("%d", a + (rand() % (b - a + 1)));
}
