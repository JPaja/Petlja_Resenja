//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/06_malo_u_veliko_slovo

#include <stdio.h>

int main()
{
    char a = getchar();
    if (a >= 'a' && a <= 'z')
        a += 'A' - 'a';
    putchar(a);
}
