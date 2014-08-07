#include<stdio.h>
#include<stdlib.h>

void main()
{
	int la;
	int *arr;
	arr = malloc(la*sizeof(int));
	int i;
	for(i=0;i<la;i++)
	{
		scanf("%d",(arr+i));
	}
	int numb = inserti(arr);
}

int inseri(int *arr,int start,int end)
{
	int l = end;
	int shift=0;
	while(l != 0)
	{
		if(*(arr+l) < *(arr+l-1))
		{
			int temp = *(arr+l);
			*(arr+l) = *(arr+l-1);
			*(arr+l-1) = temp;
		}
		l--;
	}
}
