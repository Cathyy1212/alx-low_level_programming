#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int add(int, int);  // function prototype

int main(void) {
		int result;

	result = add(5, 6);
	printf("Result: %d\n", result);

	return 0;
}

int add(int a, int b) {
	return a + b;
}
