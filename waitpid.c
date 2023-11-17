#include "shell.h"

/**
 * shell_launch - splits a string into words. Repeat delimiters are ignored
 * @args: the input string
 *
 * Return: a pointer to an array of strings, or NULL on failure
 */

int shell_launch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("shell");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("shell");
	}
	else
	{
		do

		{
			waitpid(pid, &status, WUNTRACED);
		}
		while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
