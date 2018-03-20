#include<stdio.h>

int isEqual(int a,int b)
{
	if(a==b)
	{
	return 1;
	}
	else
	{
	return -1;
	}

}

void swap(int *x,int *y)
{
	int var1=&x;
	int var2=&y;
	
	int tmp;
	tmp=var1;
	var1=var2;
	var2=tmp;

}
