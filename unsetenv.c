#include "shell.h"

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
