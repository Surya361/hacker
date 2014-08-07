#include<stdio.h>
#include<stdlib.h>

int main()
{
	int times;
	scanf("%d",&times);
while(times)
{
	char *a;
	a = malloc(10000*sizeof(char));
	scanf("%s",a);
	int l = lengt(a);
	int i = l/2;
	int j,dif = 0;
	for(j=0;i>j;j++)
	{
		dif = dif + (diff((a+j),(a+l-j-1)));
	}
	printf("%d\n",dif);
	times--;
}
	return 0;
}
int lengt(char *a)
{
	int i = 0;
	while( (*(a+i)) != '\0' )
	i++;
	return i;
}
int diff(char *a,char *b)
{
	if(*a > *b)
	return (*a - *b);
	return (*b - *a);
}
