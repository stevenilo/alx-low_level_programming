#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: 0;
 */

int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
rintf("Error\n");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
