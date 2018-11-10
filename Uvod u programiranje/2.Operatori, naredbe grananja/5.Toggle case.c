//http://petlja.org/biblioteka/r/problemi/uvod-u-programiranje/05_toggle_case

#include <stdio.h>

int main()
{
    char a = getchar();
    if (a >= 'a' && a <= 'z')
        a += 'A' - 'a';
    else if (a >= 'A' && a <= 'Z')
        a -= 'A' - 'a';
    putchar(a);
}