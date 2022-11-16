#include "main.h"

/** PRINT WITHOUT USING PRINF AND ADDING NEWLINE AS NEEDED **/
/**
 * print_str - To print a string character by character.
 * @str: Indicate string to be printed. If the string is NULL it will print (null)
 * @new_line: Indicate if integer is 0 a new line will be printed. Otherwise a new line
 * will not be printed.
 */
void print_str(char *str, int new_line)
{
	int i;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		write(STDOUT_FILENO, &str[i], 1);
	if (new_line == 0)
		write(STDOUT_FILENO, "\n", 1);
}

/** PRINT A SINGLE LETTER **/
/**
 * _write_char - To write a character to stdout
 * @c: Indicate character that will be written to stdout
 * Return: Upon success how many characters were written.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}

/** PRINT EVERY DIGIT OF A NUMBER AS SINGLE CHARS **/
/**
 * print_number - To print an unsigned number
 * @n: Indicate unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_number(int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
