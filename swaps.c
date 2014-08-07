#include<stdio.h>
#include<stdlib.h>


int inserti(int *arr,int la)
{
	int i=0,shift=0,j;
	for(i=0;i<la;i++)
	{
		for(j=0;j<i;j++)
		{
			if(*(arr+j) > *(arr+i))
			shift++;
		}
	}
	return shift;
}
void main()
{
	int la;
	scanf("%d",&la);
	int *arr;
	arr = malloc(la*sizeof(int));
	int i;
	for(i=0;i<la;i++)
	scanf("%d",(arr+i));
	int times = inserti(arr,la);
	printf("%d",times);
}
