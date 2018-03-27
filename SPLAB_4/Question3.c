#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

int counter;
static jmp_buf envbuf;

void firstSetJump()
{
 printf("%d",counter);
}
void haveFun()
{
 printf("%d",counter);
}
int main()
{
 
 
 counter=setjmp(envbuf);
 if(counter==0)
 {
	firstSetJump();
 }
 else
 {
	haveFun();
 }

 return 0;
}
