#include "main.h"
/**
 * new_help_history - To help builtin command history
 * @vars: Indicate if command matches builtin name, text file sent to stdout
 * Return: 0 if sucess
 */
void new_help_history(vars_t *vars)
{
	char *file;
	int fd, r;
	char *s;

	if (_strcmpr(vars->array_tokens[1], "history") == 0)
	{
		file = "/home/shell_test/shelltestenviroment/helpfiles/history";
		fd = open(file, O_RDWR);

		s = malloc(300);
		if (s == NULL)
		{
			_puts_error("Fatal Error");
			return;
		}
		while ((r = read(fd, s, 300)) > 0)
		{
			r = write(1, s, r);
			print_message("\n");
			if (r == -1)
			{
				_puts_error("Fatal Error");
			return;
			}
		}
		free(s);
		fd = close(fd);
	}
	else
		new_help_unalias(vars);
}
/**
 * new_help_unalias - To help builtin command unalias
 * @vars: Indicate if command matches builtin name, text file sent to stdout
 * Return: 0 if sucess
 */
void new_help_unalias(vars_t *vars)
{
	char *file;
	int fd, r;
	char *s;

	if (_strcmpr(vars->array_tokens[1], "unalias") == 0)
	{
		file = "/home/shell_test/shelltestenviroment/helpfiles/unalias";
		fd = open(file, O_RDWR);

		s = malloc(300);
		if (s == NULL)
		{
			_puts_error("Fatal Error");
			return;
		}
		while ((r = read(fd, s, 300)) > 0)
		{
			r = write(1, s, r);
			print_message("\n");
			if (r == -1)
			{
				_puts_error("Fatal Error");
			return;
			}
		}
		free(s);
		fd = close(fd);
	}
	else
		new_help_unset(vars);
}
/**
 * new_help_unset - To help builtin command unset
 * @vars: Indicate if command matches builtin name, text file sent to stdout
 * Return: 0 if sucess
 */
void new_help_unset(vars_t *vars)
{
	char *file;
	int fd, r;
	char *s;

	if (_strcmpr(vars->array_tokens[1], "unset") == 0)
	{
		file = "/home/shell_test/shelltestenviroment/helpfiles/unset";
		fd = open(file, O_RDWR);

		s = malloc(300);
		if (s == NULL)
		{
			_puts_error("Fatal Error");
			return;
		}
		while ((r = read(fd, s, 300)) > 0)
		{
			r = write(1, s, r);
			print_message("\n");
			if (r == -1)
			{
				_puts_error("Fatal Error");
			return;
			}
		}
		free(s);
		fd = close(fd);
	}
	else
		new_help_unsetenv(vars);
}
/**
 * new_help_unsetenv - To help builtin command unsetenv
 * @vars: Indicate if command matches builtin name, text file sent to stdout
 * Return: 0 if sucess
 */
void new_help_unsetenv(vars_t *vars)
{
	char *file;
	int fd, r;
	char *s;

	if (_strcmpr(vars->array_tokens[1], "unsetenv") == 0)
	{
		file = "/home/shell_test/shelltestenviroment/helpfiles/unsetenv";
		fd = open(file, O_RDWR);

		s = malloc(300);
		if (s == NULL)
		{
			_puts_error("Fatal Error");
			return;
		}
		while ((r = read(fd, s, 300)) > 0)
		{
			r = write(1, s, r);
			print_message("\n");
			if (r == -1)
			{
				_puts_error("Fatal Error");
			return;
			}
		}
		free(s);
		fd = close(fd);
	}
	else
		new_help_setenv(vars);
}
/**
 * new_help_setenv - To help builtin command setenv
 * @vars: Indicate if command matches builtin name, text file sent to stdout
 * Return: 0 if sucess
 */
void new_help_setenv(vars_t *vars)
{
	char *file;
	int fd, r;
	char *s;

	if (_strcmpr(vars->array_tokens[1], "setenv") == 0)
	{
		file = "/home/shell_test/shelltestenviroment/helpfiles/setenv";
		fd = open(file, O_RDWR);

		s = malloc(300);
		if (s == NULL)
		{
			_puts_error("Fatal Error");
			return;
		}
		while ((r = read(fd, s, 300)) > 0)
		{
			r = write(1, s, r);
			print_message("\n");
			if (r == -1)
			{
				_puts_error("Fatal Error");
			return;
			}
		}
		free(s);
		fd = close(fd);
	}
	else
		new_help_alias(vars);
}
