#ifndef SHELL_H
#define SHELL_H

void env_shell(char **args, char *line, char **env);
void exit_shell(char **args, char *line, char **env);
void shell(int argc, char **argv, char **env);
int main(int argc, char **argv, char **env);
char *_getline(void);
char **split_line(char *line);
int check_for_builtings(char **args, char *line, char **env);
int launch_prog(char **args);
int  buitlins_checker(char **args);



#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <stddef.h>
#include <errno.h>
#include <sys/wait.h>
#define TOKENS_BUFFER_SIZE 64
#define LINE_SIZE 1024
#define TOKEN_DELIMITERS " \t\r\n\a"
extern char **environ;
/**
  * struct builtins - has builtins and associated funcs
  * @arg: Builtins name
  * @builtin: Matching builtin func
  */
typedef struct builtins
{
	char *arg;
	void (*builtin)(char **args, char *line, char **env);
}
builtins_t;

#endif
