#include "shell.h"

/**
 * shell_read_line - gets a line minus the newline
 * @void: no parameter struct
 *
 * Return: bytes read
 */

char *shell_read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("shell: getline\n");
			exit(EXIT_FAILURE);
		}
	}

	return (line);
}
