#include "shell.h"

int exblt(char *b)
{
	int i;
	
	char *ex;
       
	i = 0;
	ex = "exit\n";
	while(b[i])
	{
		if(ex[i] != b[i])
			return 0;
		i++;
	}

	return 1;
}

/**
 * main - Entry to launch program.
 * Return: If all goes well, return 0.
 */

int main(void)
{
	int status;
        pid_t pid_c;
	int glr;
	char *buffer;
	char *args[MAXLINE];
        /*size_t max = MAXLINE;*/	 
        size_t max = 0;	 

        do{
		write(1, "$ ",2);
	       	
		glr = getline(&buffer,&max, stdin);

		if(glr == -1 || exblt(buffer))
		{
			free(buffer);
			exit(0);
		}
		pid_c = fork();         
                if(pid_c > 0)/*father*/
                {
                        pid_c =wait(&status);
                        continue;
                }
                else if(pid_c == 0)
                {
			cmdbld(buffer,args);
			if(fpcmd(args)==NULL)
				exit(0);
                        exit(execmd(args));
                }

        }while(glr > 0);
        return (0);

}


