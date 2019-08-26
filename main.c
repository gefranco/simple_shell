#include "shell.h"

/**
 * main - Entry to launch program.
 * Return: If all goes well, return 0.
 */

int main(void)
{
	int status;
	pid_t pid_c;

	char *buffer;
/*char *bin;*/
	size_t max = MAXLINE;
	char *args[MAXLINE];

	printf("#cisfun$ ");
	whileb(getline(&buffer, &max, stdin) > 0)
	{
		printf("#cisfun$ ");
		/*bin = malloc(5 * sizeof(char));
                bin[0] = '/';
                bin[1] = 'b';
                bin[2] = 'i';
                bin[3] = 'n';
                bin[4] = '/';
		*/

		cmdbld(buffer, args);

		pid_c = fork();

		if (pid_c > 0)//father
		{
			pid_c = wait(&status);
// free(bin);
			continue;
		}
		else if (pid_c == 0)
		{
			exit(execmd(args));
		}

	}
	free(buffer);
	return (0);

}


