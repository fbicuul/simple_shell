#include "main.h"

/**
 * print_cd_1 - To print error when cd argument is invalid
 *              i.e. cd -asd22
 * @vars: Indicate vars parameter to include
 * Return: Always return void and print a messaje as shown below.
 */
void print_cd_1(vars_t *vars)
{
	print_str("-bash: cd: ", 1);
	print_str(vars->array_tokens[1], 1);
	print_str(": invalid option", 0);
	print_str("cd: usage: cd [-] [--]", 0);
}

/**
 * print_cd_2 - To print error message when cd argument doesn'n exist.
 *              i.e. cd das7d32
 * @vars: Indicate vars parameter to include
 * Return: Always return void and print a messaje as shown below.
 */
void print_cd_2(vars_t *vars)
{
	print_str("-bash: cd: ", 1);
	print_str(vars->array_tokens[1], 1);
	print_str(": Not a directory", 0);
}
