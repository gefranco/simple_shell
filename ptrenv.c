#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"
int ptrenv(void)
{
	unsigned int i;

	extern char **environ;
	
	i = 0;
	while (environ[i])
	{
		write(1, environ[i], strlen(environ[i]));
		write(1,"\n",1);	
		i++;
	}
	return(0);

}
