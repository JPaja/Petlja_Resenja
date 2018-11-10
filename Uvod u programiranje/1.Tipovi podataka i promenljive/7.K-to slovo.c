//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/07_k-to_slovo

#include <stdio.h>

int main()
{
    char a = getchar();
    int k;
    scanf("%d", &k);
    a += k;
    putchar(a);
}
