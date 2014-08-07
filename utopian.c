#include<stdio.h>
#include<stdlib.h>

int height(int cycles)
{
	int h = 1;
	while(cycles)
	{
		h = h*2;
		cycles--;
		if(cycles)
		{
			h = h+1;
			cycles--;
		}
	}
	return h;
}

int void main()
{
	int times;
	scanf("%d",&times);
	while(times)
	{
		int k;
		scanf("%d",&k);
		int h = height(k);
		printf("%d\n",h);
		times-- ;
	}
	return 0;
}
