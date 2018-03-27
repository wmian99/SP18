#include<stdlib.h>
#include<stdio.h>

int main()
{
 int *i1, *i2, *i3, *i4;
 printf("sbrk(0) before malloc(4): 0x%x\n", sbrk(0));
 i1=(int *) malloc ( sizeof(int) * 1);
 printf("sbrk(0) after i1 malloc(4): 0x%x\n", sbrk(0));
 i2=(int *) malloc (4);
 printf("sbrk(0) after i2 malloc(4): 0x%x\n", sbrk(0));
 i3=(int *) malloc (4);
 printf("sbrk(0) after i3 malloc(4): 0x%x\n", sbrk(0));
 i4=(int *) malloc (4);
 printf("sbrk(0) after i4 malloc(4): 0x%x\n", sbrk(0));
 
}

