#include <stdio.h>
/**
*main - print alphabet in lowercase and then uppercase
*using the main function
*Return: 0
*/

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
