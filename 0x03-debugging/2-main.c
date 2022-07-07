#include <stdio.h>
#include "main.h"
#include "2-largest_number.c"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 0;
        b = -98;
        c = 780;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
