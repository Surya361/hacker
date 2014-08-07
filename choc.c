#include<stdio.h>
#include<stdlib.h>
long ma(long max)
{
	return (max/2) * (max - (max/2)); 
}
long main()
{
	long t;
	long *a = malloc(t*sizeof(int));
	scanf("%ld",&t);
	long y = t;
	while(t != 0)
	{
		long k;
		scanf("%ld",&k);
		long max = ma(k);
		*(a+y-t)= max;
		t--;
	}
	while(y != t) 
	{
		printf("%ld\n",*(a+t));
		t++;
	}
}


