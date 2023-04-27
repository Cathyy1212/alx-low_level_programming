#include "main.h"
#include <math.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
int main()
{
    long long n = 612852475143;
    int i;

    // trouver les facteurs 2
    while (n % 2 == 0)
    {
        n /= 2;
    }

    // n est maintenant impair
    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }

    // si n est supérieur à 2, c'est un facteur premier
    if (n > 2)
    {
        printf("%lld\n", n);
    }

    return 0;
}
