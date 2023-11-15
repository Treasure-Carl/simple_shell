#include "shell.h"

/*
 * _main - functions as the main progran
 * @args: takes in no arguement
 * Return: (0)
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	shell_loop();
	return (EXIT_SUCCESS);
}
