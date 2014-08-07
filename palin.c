#include<stdio.h>
#include<stdlib.h>

int len(char *a)
{
	int i=0;
	while(*(a+i) != '\0')
	i++;
	return i;
}
int check(char *in)
{
	int *alpha;
	alpha = malloc(26*sizeof(int));
	int length = len(in);
	printf("%d",length);
	int i = length;
	while(i)
	{
		int k = *(in+length-i);
		*(alpha+k-96) = *(alpha+k-96)+1;
		i--;
	}
	int odd=0,flag;
	for(i=0;i<26;i++)
	{
		if((*(alpha+i) % 2) == 0)
		flag = 1;
		else
		{
			if(odd == 1)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
				odd = 1;
			}
		}
	}
	return flag;
	
}

int main()
{
	char *in;
	in = malloc(100000*sizeof(char));
	scanf("%s",in);
	printf("%c",*in);
	int flag = check(in);
	if(flag)
	printf("YES");
	else
	printf("NO");
}


