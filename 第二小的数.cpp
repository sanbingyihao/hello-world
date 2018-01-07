#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	int a[n],b[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[j]);
		}	
	}
	int min,sec_min,t;
	min=b[0];
	sec_min=b[0];
	for(i=0;i<m;i++)
	{
		if(min>b[i])
		min=b[i];
		t=i;
	}
	for(i=0;i<m;i++)
	{
		if(sec_min>b[i]&&sec_min>min&&i!=t)
		{
			sec_min=b[i];
		}
	}
	printf("%d\n",sec_min);
	return 0;
 } 
