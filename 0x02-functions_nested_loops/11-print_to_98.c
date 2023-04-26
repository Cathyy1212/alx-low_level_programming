#include "main.h"
#include <stdio.h>
/**
 * main - print_to_98(int n).
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
    if (n <= 98) {
        for (int i = n; i < 98; i++) {
            printf("%d, ", i);
        }
    } else {
        for (int i = n; i > 98; i--) {
            printf("%d, ", i);
        }
    }
    printf("98\n");
}
