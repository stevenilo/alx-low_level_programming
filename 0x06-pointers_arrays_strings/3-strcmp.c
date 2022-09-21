#include "main.h"

/**
 * _strcmp - function which compare two strings and
 * @s1: first string
 * @s2: second string
 * Return:
 *        return zero if s1 == s2
 *        return negative number if s1 < s2
 *        return positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
