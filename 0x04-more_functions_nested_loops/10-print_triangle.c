#include "main.h"

/**
 *print_traingle - prints a triangle using #
 *@size: the size of the traingle.
 */

void print_traingle(int size)
{
int hash, index;

if (size > 0)
{
for (hash = 1; hash <= size; hash++)
{
for (index = size - hash; index > 0; index--)
{
putchar(' ');
}
for (index = 0; index < hash; index++)
{
putchar('#');
}
if (hash == size)
{
continue;
}
putchar('\n');
}
}
putchar('\n');
}
