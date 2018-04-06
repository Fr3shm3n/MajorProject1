#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0, x, counter = 0, arg;
	long size;
	char input[512];
	char *buffer, *cwd;
	char **command, **cmds, **args;
	
	if(argc == 1)
	{
		while(1)
		{
			counter = 0;
			printf("> ");
			fgets(input, 512, stdin);
			if(input[strlen(input) - 2] != ';')
				counter++;
			for(x = 0; x < strlen(input); x++)
			{
				if(input[x] == ';')
				{
					counter++;
				}
			}
			cmds = malloc(counter*sizeof(char*));
			command[i] = strtok(input, ";");
			while(command[i] != NULL)
			{
				cmds[i] = malloc(strlen(command[i])*sizeof(char));
				strcpy(cmds[i], command[i]);
				i++;
				command[i] = strtok(NULL, ";");
			}
			for(i = 0; i < counter; i++)
			{
				arg = 1;
				for(x = 0; x < strlen(cmds[i]) + 1; x++)
				{
					if(cmds[i][x] == ' ')
					{
						if(x == 0)
						{}
						else
							arg++;
					}
				}
			}
			/*args = malloc(arg*sizeof(char*));
			i = 0;
			for(x = 0; x < arg; x++)
			{
				command[i] = strtok(cmds[x], " ");
				while(command[i] != NULL)
				{
					command[i] = malloc(strlen(cmds[x])*sizeof(char));
					strcpy(args[i], command[i]);
					i++;
					command[i] = strtok(NULL, " ");
				}
				printf("%s", args[x]);
			}*/
			/*for(x = 0; x < counter; x++)
			{
				printf("%s\n", cmds[x]);
				if(strcmp(cmds[x], "exit") == 0)
				{
					exit(0);
				}
				else if(strcmp(cmds[x], "pwd") == 0)
				{
					cwd = getcwd(buffer, 0);
					printf("%s", cwd);
				}
				else if(strcmp(cmds[x], "cd") == 0)
				{
					chdir(getenv("HOME"));
				}
				else if(strcmp(cmds[x], "cd") > 0)
				{}
				else
				{}
				//	execvp(
					
			}*/
		}
	}
	else if(argc > 1)
	{
		// Read from batch file
	}
	else
	{
		printf("Invalid, too many arguments");
		exit(0);
	}
	
	return 0;
}