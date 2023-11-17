#include "shell.h"

/**
 * shell_unsetenv - Initialize a new environment variable,
 *             or modify an existing one
 * @args: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: Always 0
 */

int shell_unsetenv(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "shell: expected argument to \"unsetenv\"\n");
	}
	else
	{
		if (unsetenv(args[1]) != 0)
		{
			perror("shell");
		}
	}

	return (1);
}
