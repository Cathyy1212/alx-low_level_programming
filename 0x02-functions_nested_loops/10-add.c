#include <stdio.h>
#ifndef MYHEADER_H
#define MYHEADER_H

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int add(int a, int b);

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
