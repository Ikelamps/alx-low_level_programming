#include "main.h"

/**
 * cap_string - capitalizs the words used
 * @str: string
 * Return: pointer
 */
char *cap_string(char *str)
{
	int q = 0;

	while (str[q])
	{
		while (!(str[q] >= 'a' && str[q] <= 'z'))
			q++;
		if (str[q - 1] == ' ' ||
			str[q - 1] == '\t' ||
			str[q - 1] == '\n' ||
			str[q - 1] == ',' ||
			str[q - 1] == ';' ||
			str[q - 1] == '.' ||
			str[q - 1] == '!' ||
			str[q - 1] == '?' ||
			str[q - 1] == '"' ||
			str[q - 1] == '(' ||
			str[q - 1] == ')' ||
			str[q - 1] == '{' ||
			str[q - 1] == '}' ||
			q == 0)
			str[q] -= 32;
		q++;
	}
	return (str);
}
