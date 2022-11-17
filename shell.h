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


#endif
