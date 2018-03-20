#include<stdio.h>
#include "myMath.h"

int main()
{
	int j=0;
	j=isEqual(5,5);
	if(j==1)
	{
	printf("they are equal");
	}
	else
	{
	printf("they aren't equal");
	}

	int x=5;
	int y=6;
	swap(x,y);
	printf("%d",x);
	printf("%d",y);
	return 0;
}
