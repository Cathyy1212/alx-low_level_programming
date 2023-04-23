#include <stdio.h>
#include <stdlib.h>
/**
 * main - initiation to c
 * Return: returning 0
 */
int main(void)
{
        char r = 'a';
        char l = 'A';

        while (r <= 'z')
        {
        putchar(r);
        r++;
        }
        while (l <= 'Z')
        {
        putchar(l);
        l++;
        }
        putchar('\n');
        return (0);
}
