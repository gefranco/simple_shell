#ifndef myshell
#define myshell
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXLINE 1000

int cmdbld(char *buffer, char *args[]);
int execmd(char *args[]);

#endif
