#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 */
int print_last_digit(int num) 
{
    int last_digit;

    if (num < 0) {
        num = -num;
    }

    last_digit = num % 10;

    printf("%d\n", last_digit);

    return last_digit;
}
