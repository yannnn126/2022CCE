#include<stdio.h>
int main()
{
	int f[51],i,n;
	scanf("%d",&n);
	f[0]=0;f[1]=1;
	for(i=2;i<=n;i++)
	{	f[i]=f[i-1]+f[i-2];
	}
	for(i=0;i<n;i+=3)
	{	printf("%d ",f[i]);
	}
}
