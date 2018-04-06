#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, **argv)
{
	int i = 0, x, counter = 0;
	char input[512];
	char *command;
	char **cmnds, **args;
	
	if(argc == 1)
	{
		while(1)
		{
			printf("> ");
			scanf("%s", input);
			for(x = 0; x < strlen(input) + 1; x++)
			{
				if(input[x] == ';')
					if(input[x+1] == '\0')
						counter++;				// At least 1 command
					else
						// Checks to see if last char is a null signifying it is the last command, otherwise there is another command with no ; so add 2 to counter
						counter = counter + 2;
			}
			if(counter == 0)
				counter = 1;
			cmds = malloc(counter*sizeof(char*));
			command = strtok(input, ";");
			while(cmd[i] != NULL)
			{
				cmds[i] = malloc(strlen(command)*sizeof(char));
				strcpy(cmds[i], command);
				i++;
			}
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
}