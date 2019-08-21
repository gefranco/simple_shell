#include "shell.h"
int execmd(char *args[])
{
        
        if(execve(args[0],args,NULL) == -1)  
        {

                perror("Error");
                return (-1);        
                
        }


        return 0;
}
