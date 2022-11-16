#include "shell.h"

/**
 * main - a code to handle command lines with arguments
 * @argc: Argument count
 * @argv: An array of arguments
 * @env: Environment
 * Return: 0;
 */
int main(int argc, char **argv, char **env)
{
	if (!argc)
		(void)argc;
	if (!argv)
		(void)argv;
	if (!env)
		(void)env;
	shell(argc, argv, env);
	return (0);
}

