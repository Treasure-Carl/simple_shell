#include "shell.h"

/**
 * shell_loop - finds a builtin command
 * @void: the parameter & return info struct
 *
 * Return: -1 if builtin not found,
 *			0 if builtin executed successfully,
 *			1 if builtin found but not successful,
 *			-2 if builtin signals exit()
 */

void shell_loop(void)
{
	char *line;
	char **args;
	int status;

	do

	{
		printf("$ ");
		line = shell_read_line();
		args = shell_split_line(line);
		status = shell_execute(args);

		free(line);
		free(args);
	}
	while
	(status);
}
