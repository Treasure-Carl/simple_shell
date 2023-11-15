#include "builtins.h"
#include "shell.h"

char *built_in_string[] = { "cd", "help", "exit", "setenv", "unsetenv" };

int (*built_in_function[])(char **) = { &shell_cd, &shell_help, &shell_exit, &shell_setenv, &shell_unsetenv };

int shell_builtins() {
  return sizeof(built_in_string) / sizeof(char *);
}
