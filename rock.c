#include<stdio.h>
#include<stdlib.h>
int lent(char *a)
{
	int i =0;
	while(*(a+i) != '\0')
	i++;
	return i;
}
int searc(char *a,char b)
{
	int la = lent(a);
	int i;
	for(i=0;i<la;i++)
	{
		if (*(a+i) == b)
		return 1;
	}
	return 0;
}
char* super(char *a,char *b)
{
	int al = lent(a);
	int bl = lent(b);
	char *c;
                c = malloc(100*sizeof(char));

	if (al > bl)
	{
		int i,j=0;
		for(i=0;i<bl;i++)
		{
			if(searc(c,*(b+i)) == 0)
			{
				if(searc(a,*(b+i)) == 1)
				{
					*(c+j) = *(b+i);
					j++;
				}
			}
		}
	}
	else
	{
                int i,j=0;
                for(i=0;i<al;i++)
                {
                        if(searc(c,*(a+i)) == 0)
                        {
                                if(searc(b,*(a+i)) == 1)
                                {
                                        *(c+j) = *(a+i);
                                        j++;
                                }
                        }
                }

	}
	return c;
}
int main()
{
	int ti;
	scanf("%d",&ti);
	char *a;
	a = malloc(100*sizeof(char));
	scanf("%s",a);
	char *b;
	b = malloc(100*sizeof(char));
	b = a;
	while(ti)
	{
		a = super(a,b);
		ti--;
		if(ti)
		scanf("%s",b);
	}
	printf("%d",lent(a));
}



