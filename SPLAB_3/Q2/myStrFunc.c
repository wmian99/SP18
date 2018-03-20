#include<stdio.h>

int isPalindrome(char *arr,int size)
{
	int i;
	for(i=0;i<size/2;i++)
	{
		if(arr[i]==arr[size])
		{
			size=size-1;
   		}
		else
		{
		 return -1;
		}	
	}
	return 1;
}
