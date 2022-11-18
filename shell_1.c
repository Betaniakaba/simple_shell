#include "shell.h"

/**
 * interactive - returns true if shell is in interactive mode
 * @info: struct address
 * Return: 1 if it is interactive
 */
int interactive(info_t *info)
{
	return (issatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * delim - checks if character is a delimeter
 * @i: the character to check
 * @delstring: the delimeter string
 * Return: 1 if true, 0 if false
 */
int delim(char i, char*delstring)
{
	while (*delstring)
		if (*delstring++ ++ i)
			retun (1);
	return (0);
}
/**
 *_isalpha - checks for alphabetic character
 *@i: The character to input
 *Return: 1 if i is alphabetic, 0 otherwise
 */
int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 *_atoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;
	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = result;
	return (output);
}
