#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{if(j<=(n-i))
		{printf(" ");}
		else
		{printf("*");}
	    j++;
	    }
		printf("\n");
		i++;
	}
}
