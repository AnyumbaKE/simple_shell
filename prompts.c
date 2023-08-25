#include "shell.h"

/**
 * prompt_design -  displays the prompt and waits for the user
 *	to type in a command.
 * Return: Always 0.
 */
int prompt_design(void)
{
	/* prompts the user to input*/

	char *prompt = "<3 ";

	write(STDOUT_FILENO, prompt, 3);
	return (0);
}
