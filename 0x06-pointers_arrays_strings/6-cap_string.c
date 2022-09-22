#include "main.h"

/**
 * cap_string - function that capitalize all words of string
 * @s: input string to capitalize
 * Return: returns the capitalized string
 */

char *cap_string(char *s)
{
int index = 0;

while (str[index])
{
while (!(str[index >= 'a' && str[index] <= '2'))
index++;

if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
index == 0)
str[index] -= 32;
index++;
}
return (str);
}
