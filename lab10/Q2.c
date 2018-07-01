#include<stdlib.h>
#include<stdio.h>
#include<signal.h>

int main()
{
	pid_t cpid=fork();
	if(cpid==0)
	     for(;;){
		printf("I am child in infinite loop\n");
		sleep(1);
		}
	else
	{
		sleep(5);
		kill(cpid,SIGINT);
		printf("I have killed my child\n");
		exit(0);

	}	
	return 0;
}
