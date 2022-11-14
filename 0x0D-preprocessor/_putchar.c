#include <unistd>

/**
 * _putchar - this writes the character c to stdout
 * @c: the character to print
 * Return: Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
