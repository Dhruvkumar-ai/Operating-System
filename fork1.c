#include<stdio.h>
#include<unistd.h>
int main()
{
printf("Before fork()\n");
pid_t p=fork();
if(p<0)
{
printf("fork failed\n");
}
else if(p==0)
{
printf("My id is: %d\n",getpid());
printf("My parent id is:%d\n",getppid());
}
else
{
printf("My id is:%d\n",getpid());
printf("Done\n");
}
}
