#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_getenv(const char *name)
{
	unsigned int i;

	extern char **environ;
	
	char *env;
	char *av;
	char *tmp;
	env = NULL;
	i = 0;
	while (environ[i])
	{
		tmp = malloc(strlen(environ[i]) * sizeof(char));
		strcpy(tmp,environ[i]);
		av = strtok(tmp, "=");
		if (strcmp(av,name) == 0)
		{
			env = strtok(NULL, "=");
			return (env);
		}
		i++;
	}


	return(env);


}
