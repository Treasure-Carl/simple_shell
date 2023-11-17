#include "shell.h"

/**
 * shell_setenv - Initialize a new environment variable,
 *             or modify an existing one
 * @args: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: Always 0
 */

int shell_setenv(char **args)
{
	if (args[1] == NULL || args[2] == NULL)
	{
		fprintf(stderr, "shell: expected 2 arguments to \"setenv\"\n");
	}
	else
	{
		if (setenv(args[1], args[2], 1) != 0)
		{
			perror("shell");
		}
	}

	return (1);
}
