#include "shell.h"

int pathdirs(char *path, char **dirs)
{
	unsigned int i;
	char *av;
	/*char *dirs[1024] = {0};*/
	
	
	

	
	i = 0;
	av = strtok(path, ":");
	while (av)
	{
		dirs[i] = malloc(strlen(av) * sizeof(char));
		strcpy(dirs[i],av);
		av = strtok(NULL, ":");
		i++;
	}
	dirs[i] = 0;
	return(0);
}
