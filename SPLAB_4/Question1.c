#include<stdio.h>

int main()
{

 int size=10;
 int* arr1=(int*) malloc (sizeof(int) *size);
 
 for (int i=0;i<10;i++)
 {
  arr1[i]=5;
 }

 for (int i=0;i<10;i++)
 {
  printf("%d ",arr1[i]);
 }

printf("reallocating array");
printf("\n");

 int nsize=size*2;
 int *narr=(int*) realloc (arr1,sizeof(int) *nsize); 

 for(int j=0;j<nsize;j++)
 {
  narr[j]=2;
 }
 
 for (int i=0;i<nsize;i++)
 {
  printf("%d ",narr[i]);
 }

 free(narr);

  return 0;
}

