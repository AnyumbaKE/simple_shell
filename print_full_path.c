#include "shell.h"

/**
 * main - prints full directory path
 * Return: 0 Always (Success)
 */
int main(void)
{
	char *full_path = NULL;

	full_path = _which("ls", full_path);

	printf("Path: %s\n", full_path);

	free(full_path);

	return (0);
}
