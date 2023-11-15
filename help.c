#include "shell.h"


int shell_help(char **args __attribute__((unused))) {
  int i;
  printf("This is simple C shell build by Treasure Olayinka\n");
  printf("Type program names and arguments, and hit enter.\n");
  printf("The following are built in:\n");

  for (i = 0; i < shell_builtins(); i++) {
    printf(" %s\n", built_in_string[i]);
  }

  printf("Use the man command for information on other programs.\n");
  return 1;
}

int shell_exit(char **args __attribute__((unused))) {
  return 0;
}
