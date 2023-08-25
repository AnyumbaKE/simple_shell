#include "shell.h"

/**
 * get_help - a function that retrieves help messages according to builtin
 * @datash: data structure (args and inputs)
 * Return: Return 0 Always
*/
int get_help(data_shell *datash)
{

	if (datash->args[1] == 0)
		help_general();
	else if (_strcmp(datash->args[1], "setenv") == 0)
		help_setenv();
	else if (_strcmp(datash->args[1], "env") == 0)
		help_env();
	else if (_strcmp(datash->args[1], "unsetenv") == 0)
		help_unsetenv();
	else if (_strcmp(datash->args[1], "help") == 0)
		help();
	else if (_strcmp(datash->args[1], "exit") == 0)
		help_exit();
	else if (_strcmp(datash->args[1], "cd") == 0)
		help_cd();
	else if (_strcmp(datash->args[1], "alias") == 0)
		help_alias();
	else
		write(STDERR_FILENO, datash->args[0],
		      _strlen(datash->args[0]));

	datash->status = 0;
	return (1);
}
