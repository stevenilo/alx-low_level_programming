#include <stdio.h>
#include "main.h"

/**
 * leet - leet encoder to 1337.
 * @s: input string
 *
 * Return: pointer to dest
 */

char *leet(char *s)
{

int i, ii;
char s1[] = "aeotl";
char t1[] = "AEOTL";
char s2[] = "43071";

for (i = 0; s[i] != '\0'; i++)
{
for (ii = 0; ii < 5; ii++)
{
if (s[i] == s1[ii] || s[i] == t1[ii])
{
s[i] = s2[ii];
break;
}
}
}
return (s);
}
