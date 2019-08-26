#include "shell.h"

/**
 * execmd - Execute the command.
 * @args: Character array where the command is tokanized.
 * Return: If all goes well, return 0.
 */

int execmd(char *args[])
{

	if (execve(args[0], args, NULL) == -1)
	{

		perror("Error");
		return (-1);

	}

	return (0);

}
