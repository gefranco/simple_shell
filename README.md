<h1 align="center">SIMPLE SHELL - Command Language Interpreter</h1>

<p align="center">
  <img src="https://github.com/gefranco/simple_shell/blob/master/Shell.jpg"
       alt="shell"
       width="500"
  >
</p>



#### Project carried out as part of the software developer training curriculum at Holberton School

### GETTING STARTED

The path to execute the commands is searched.

Type the command you want and press enter

Indicates "error" when a command is not found

### HOW TO USE SHELL

To put the shell into operation you must follow these steps...

Clone the following repository in your virtual machine:

```
https://github.com/gefranco/simple_shell
```

Find the simple_shell directory by typing the 'cd' command.

Compile the '.c' files with the following syntax:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o shell
```

Run the shell with:

```
./shell
```

Type the command you want to write, for example:

```

 ls
 pwd
 exit
 echo[arg]
 mkdir
 mk
 mv
 exit
 cd[arg]
 env
```

#### Output

Shell executes individual commands, you must specify the arguments and the directory.

```
For example:	$ /bin/pwd
    		$ /bin/ls
		$ /bin/cd[name dir]
		$ /bin/mv

		$ exit
		$ ./shell: (CTRL + D)
```

### FILES INCLUDED FOR THE EXECUTION OF SHELL

```
FILE			THIS EXECUTIVE FILE

cmdbld.c		Tokanize to create separate commands.
concat.c		Concatenate an string to string destination.
execmd.c		Execute the command.
exittblt.c		Exit the command.
fpcmd.c			File the command path.
getenv.c		This function gets the enviroment of the commands.
pathdirs.c		With this function you get the full path and save it in a chain.
ptrenv.c		Print the environment of the variable
_strcmp.c		Compares only the bytes of s1 & s2.
_strcpy.c		Copies the src, including '\0', to the buffer pointed to dest.
_strlen.c		This function counts the leng of a string.
main.c			Main File, entry point for shell.
shell.h			This is the file contains the prototypes functions files and anothers libraries.
man_1_simple_shell	Documentation Man_Page
README.md		Documentation Readme File
AUTHORS			Documentation File contain text whith the name of authors

```

### AUTHORS

* German Franco 
* Jose Gabriel Guerra
