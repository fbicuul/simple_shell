#include "main.h"

/**
 * _puts_error - To print a string to sdandard error
 * @str: Indicate string to print.
 * Return: void
 */

void _puts_error(char *str)
{
	long num, len;

	num = _strlen(str);
	len = write(STDERR_FILENO, str, num);
	if (len != num)

	{
		perror("fatal error");
		exit(100);
	}
}

/**** print error message with certain parameters ****/
/**
 * prints_error_msg - To print error messages to standard error
 * @vars: Indicate pointer to struct of variables
 * @msg: Indicate message to print
 *
 * Return: void
 */

void prints_error_msg(vars_t *vars, char *msg)
{
	char *count;

	_puts_error(vars->argv[0]);
	_puts_error(": ");

	/*Here I create a function to convert an integer to string*/
	count = integer_converter(vars->counter);
	_puts_error(count);
	free(count);
	_puts_error(": ");
	_puts_error(vars->array_tokens[0]);
	if (msg)
	{
		_puts_error(msg);
	}
	else
		perror("");
}

/**
 * integer_converter - To convert an unsigned int to a string
 * @count: Indicate unsigned int to convert
 *
 * Return: pointer to the converted string
 */

char *integer_converter(unsigned int count)
{
	char *numstr;
	unsigned int tmp, digits;

	tmp = count;

	for (digits = 0; tmp != 0; digits++)
		tmp /= 10;

	numstr = malloc(sizeof(char) * (digits + 1));

	if (numstr == NULL)
	{
		perror("Fatal Error");
		exit(100);
	}

	numstr[digits] = '\0';

	for (--digits; count; --digits)
	{
		numstr[digits] = (count % 10) + '0';
		count /= 10;
	}
	return (numstr);
}

/**
 * _atoi - To convert a string into an integer
 * @str: Indicate string to convert
 *
 * Return: the integer value, or -1 if an error occurs
 */
int _atoi(char *str)
{
	unsigned int i, digits;
	int num = 0, num_test;

	num_test = INT_MAX;
	for (digits = 0; num_test != 0; digits++)
		num_test /= 10;
	for (i = 0; str[i] != '\0' && i < digits; i++)
	{
		num *= 10;
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		if ((i == digits - 1) && (str[i] - '0' > INT_MAX % 10))
			return (-1);
		num += str[i] - '0';
		if ((i == digits - 2) && (str[i + 1] != '\0') && (num > INT_MAX / 10))
			return (-1);
	}
	if (i > digits)
		return (-1);
	return (num);
}
