#ifndef SHELL_H
#define SHELL_H

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define shell_TOK_BUFSIZE 64
#define shell_TOK_DELIM " \t\r\n\a"

int shell_builtins();
int shell_cd(char **args);
int shell_help(char **args);
int shell_exit(char **args);
int shell_setenv(char **args);
int shell_unsetenv(char **args);
char *shell_read_line(void);
char **shell_split_line(char *line);
void shell_loop(void);
int shell_execute(char **args);
int shell_launch(char **args);
extern char *built_in_string[];
extern int (*built_in_function[])(char **);

#endif
