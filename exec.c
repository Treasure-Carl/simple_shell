#include "shell.h"

int shell_execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		return (1);
	}
	for (i = 0; i < shell_builtins(); i++)
	{
		if (strcmp(args[0], built_in_string[i]) == 0)
		{
			return ((*built_in_function[i])(args));
		}
	}

	return (shell_launch(args));
}
