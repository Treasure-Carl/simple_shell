#include "shell.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	shell_loop();
	return (EXIT_SUCCESS);
}
