#ifndef SHELL_H
#define SHELL_H

void env_shell(char **args, char *line, char **env);
void exit_shell(char **args, char *line, char **env);
void shell(int argc, char **argv, char **env);
int main(int argc, char **argv, char **env);

#endif
