//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/02_fibionacijevbroj

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int prvi = 1;
    int drugi = 1;
    for (int i = 2; i < n; i++)
    {
        int p = drugi;
        drugi += prvi;
        prvi = p;
    }
    printf("%d", drugi);
}