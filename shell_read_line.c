#include "shell.h"

char *shell_read_line(void) {
  char *line = NULL;
  size_t bufsize = 0;

  if (getline(&line, &bufsize, stdin) == -1) {
    if (feof(stdin)) {
      exit(EXIT_SUCCESS);
    } else {
      perror("shell: getline\n");
      exit(EXIT_FAILURE);
    }
  }

  return line;
}
