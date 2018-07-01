#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void handler1(int signum)
{
	switch(signum)
	{
	 case 2:
		printf("I got SIGINT : %d\n\n",signum);
		break;
	 case 3:
		printf("I got SIGQUIT : %d\n\n",signum);
		break;
	 case 20:
		printf("I got SIGSTP : %d\n\n",signum);
		break;
	 case 9:
		printf("I got SIGkill : %d\n\n",signum);
		break;
	}

}

int main()
{
	signal(SIGINT,handler1);
	signal(SIGQUIT,handler1);
	//signal(SIGSTP,handler1);
	signal(SIGKILL,handler1);

	while(1)
	{
	 printf("I am in an infinte loop !\n");
	  sleep(1);
	}
	return 0;
}
