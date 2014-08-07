#include<stdio.h>
#include<stdlib.h>

int smallest(int *a,int start,int stop)
{
	int small = 5;
	int i;
	for(i=start;i<stop+1;i++)
	{
		if(*(a+i) < small)
		small = *(a+i);
	}
	return small;
}

int main()
{
	int length,times;
	scanf("%d",&length);
	scanf("%d",&times);
	int *width;
	width = malloc(length*sizeof(int));
	int i;
	for(i=0;i<length;i++)
	scanf("%d",(width+i));
	while(times)
	{
		int start,stop;
		scanf("%d",&start);
		scanf("%d",&stop);
		int car = smallest(width,start,stop);
		printf("%d\n",car);
		times-- ; 
	}
	return 0;
}
