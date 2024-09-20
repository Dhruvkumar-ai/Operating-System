#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
	char* cmnd="ls";
	char* argument[]={"ls","-l",NULL};
	printf("Before execvp()\n");
	pid_t p=fork();
	if(p==0)
	{
		printf("child process\n");
		int status= execvp(cmnd,argument);
		if(status==-1)
		{
			printf("Terminated\n");
			exit(1);// terminating the process
		}
	}
	else
	{
		printf("parent process\n");
		wait(NULL);
		printf("Done\n");
	}
}
