#include<stdio.h>
#include<unistd.h>
int main()
{
	char* cmnd="ls";
	char* argument[]={"ls","-l",NULL};
	printf("Before the execvp()\n");
	int status= execvp(cmnd,argument);
	if(status==-1)
	{
		printf("Terminated\n");
	}
	printf("Done\n");
}
