#include <stdio.h>
/**
 *main - print the alphabet in lowercase followedby a new lin
 *using the main function
 *Return: 0
 */

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
