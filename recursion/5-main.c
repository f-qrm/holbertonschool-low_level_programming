#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1, 1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024, 1);
    printf("%d\n", r);
    r = _sqrt_recursion(16, 1);
    printf("%d\n", r);
    r = _sqrt_recursion(17, 1);
    printf("%d\n", r);
    r = _sqrt_recursion(25, 1);
    printf("%d\n", r);
    r = _sqrt_recursion(-1, 1);
    printf("%d\n", r);
    return (0);
}
