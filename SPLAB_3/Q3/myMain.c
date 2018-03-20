#include<stdio.h>
#include"myMath.h"
#include"myStr.h"

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

	int l=0;
	char *arr="abbac";
	j=isPalindrome(arr,5);
	if(l==-1)
	{
	printf("NOt a PALINDROME");
	}
	else
	{
	printf("A PALINDROME");
	}
	return 0;
}
