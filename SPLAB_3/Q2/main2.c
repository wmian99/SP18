#include<stdio.h>
#include<myStr.h>

int main()
{
	int j=0;
	char *arr="abbac";
	j=isPalindrome(arr,5);
	if(j==-1)
	{
	printf("NOt a PALINDROME");
	}
	else
	{
	printf("A PALINDROME");
	}
return 0;
}

