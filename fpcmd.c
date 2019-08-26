#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include "shell.h"
char *fpcmd(char *args[])
{

	char *path = _getenv("PATH");
        char *d[1024] = {0};
	char *cmd = args[0];
	char *buff;
	struct stat st;
	char *f;

	int i = 0;
	int j = 0;
	int i2 = 0;
	int k = 0;
	int l = 0;
	
	
	if(strcmp(cmd,"env") == 0)
	{
		ptrenv();
		return(NULL);
		
	}
	pathdirs(path, d);


	while(cmd[i])
		i++;
	
	while(d[i2])
	{
		buff = d[i2];
		j = 0;
		while (buff[j])
			j++;
		
		f = malloc(i + j + 1 * sizeof(char));
		k = 0;
		l = 0;	
		while(k < j)
		{
			f[k] = buff [l];
			k++;	
			l++;
		}
		f[k] = '/';
		k++;
		l = 0;
		while(k < (i + j)+1)
		{
			f[k] = cmd[l];
			k++;
			l++;
		}
		
		if(stat(f, &st) == 0)
		{
			args[0] = f;
		}
		else
		{
		/*	perror("not found\n");*/
			/*exit(0);*/
		}
		i2++;
			
		/*free(f);*/

	}

	return(args[0]);
}

