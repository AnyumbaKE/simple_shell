#include "shell.h"

/**
 * main - uses strtok to print tokens
 *
 * Return: 0 Always
 */
int main(void)
{
	char *str = NULL;
	char **tokens = NULL;
	unsigned int i;

	str = _getline(stdin, str);

	tokens = _strtok(str, tokens);

	i = 0;
	while (tokens[i] != NULL)
	{
		printf("%s\n", tokens[i]);
		i++;
	}

	free(str);
	free(tokens);

	return (0);
}
