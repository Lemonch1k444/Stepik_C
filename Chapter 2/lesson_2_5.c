// %d - целое число со знаком в десятичной системе, %i - целое число в десятичной, шестандцатеричной или восьмеричной системах
// %u - целове беззнаковое число в десятичной форме, %o целое в 8, %x - целое в 16, %f, %c, %s

#include <stdio.h>

int main(void)
{
    /*
    char byte1 = '0', byte2 = '1';
    int res1 = scanf("%c", &byte1); //& - адрес
    int res2 = scanf("%c", &byte2); 
    //int res = scanf("%c%c", &byte1, &byte2);
    //printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2); 
    printf("byte1 = %c, byte2 = %c\n", byte1, byte2);
    */
    long long var_lli = 0;
    double var_d = 0;

    int res = scanf("%lld %lf", &var_lli, &var_d); //по умолчанию scanf приводит f к типу float, а d - int
    printf("res = %d: var_lli = %lld, var_d = %.2f\n", res, var_lli, var_d); 

    return 0;
}