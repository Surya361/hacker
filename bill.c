#include<stdio.h>
#include<stdlib.h>

int maxi(int *a,int start, int end)
{
	int max = *(a);
	while(end-- )
	{
		if(*(a+len) > max)
		max = *(a+len);
	}
	return max;
}

int mini(int *a,int len)
{
	int min = *(a);
	while(len--)
	{
		if(*(a+len) < min)
		min = *(a+len);
	}
	return min;
}
void main()
{
	int len;
	scanf("%d",&len);
	int pack;
	scanf("%d",&pack);
	int temp = len;
	int *arr;
	arr = malloc(len*sizeof(int));
	while(temp--)
	{
		scanf("%d",(arr+temp));
	}
	int mi = mini(arr,len);
	int ma = maxi(arr,len);
	printf("%d",(ma-mi));
}
