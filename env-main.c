#include "shell.h"


int shell_cd(char **args)
{
	if (args[1] == NULL)
	{
		char *home = getenv("HOME");

		if (home == NULL)
		{
			fprintf(stderr, "shell: HOME environment variable not set\n");
		}
		else
		{
			if (chdir(home) != 0)
			{
				perror("shell");
			}
			else
			{
				setenv("PWD", home, 1);
			}
		}
	}
	else if (strcmp(args[1], "-") == 0)
	{
		char *oldpwd = getenv("OLDPWD");

		if (oldpwd == NULL)
		{
			fprintf(stderr, "shell: OLDPWD environment variable not set\n");
		}
		else
		{
			printf("%s\n", oldpwd);
			if (chdir(oldpwd) != 0)
			{
				perror("shell");
			}
			else
			{
				setenv("PWD", oldpwd, 1);
			}
		}
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("shell");
		}
		else
		{
			char cwd[1024];

			if (getcwd(cwd, sizeof(cwd)) != NULL)
			{
				setenv("PWD", cwd, 1);
			}
			else
			{
				perror("shell");
			}
		}
	}

	return (1);
}
