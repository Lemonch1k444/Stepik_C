// Моя первая программа /* */
#include <stdio.h> //директива предпроцессора //standard input output header

int main(void)
{
    char byte_memory;
    byte_memory = 100;
    char a;
    a = byte_memory;
/*
char - 1 bite, symbol or whole number, [0;255] unsigned or [-128;127] signed
short [int] or just 'short' - 2 bites, whole number, [0; 65,535] unsigned or [-32,768 ; 32,767] signed
int - 2/4 bites, whole number, [0; 4,294,967,295] unsigned or [-2,147,483,648 ; 2,147,483,647] signed
long - 4/8 bites, whole number, [0; 4,294,967,295] unsigned or [-2,147,483,648 ; 2,147,483,647] signed
long long - 8 bites, whole number, [0; 8,446,744,073,709,551,615] unsigned or [9,223,372,036,854,775,808 ; 9,223,372,036,854,775,807] signed

short, int, long, long = по умолчанию ЗНАКОВЫЕ = SIGNED, поэтому при них signed писать нет смысла

float - 4 bites, real number
double - 8 bites, real number
long double - 10 bites, real number
*/
    printf("Hello, world\n"); //print formatted 
    return 0;
}
