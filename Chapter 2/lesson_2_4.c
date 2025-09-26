#include <stdio.h>
//%d or %i - целое число со знаком в десятичной форме, %u - десятичная форма, %o - восьмеричная форма, %x - шестнадцатеричная форма, %c - character, %s - string
int main(void)
{
    /*long long var_i = -12345678901234;
    long double var_ld = 5456767.567951;
    // char, short -> int in printf
    // float -> double in printf
    // %lld for long long, %ld
     L - суффикс для long double! 
    printf("value = %Lf\n", var_ld); */

    short var_h = -100;
    int var_i = 1024;
    long double var_ld = 0.5;

    printf("var_h = %d, var_i = %d, %Lf\n", var_h, var_i, var_ld);

    printf("[%+10d]\n", var_i); //10 символов внутри скобочек
    printf("[%-10.4d]\n", var_h); //10 символов, 4 символа длина числа 
    return 0;
}