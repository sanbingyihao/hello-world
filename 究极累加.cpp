#include<stdio.h>
int fun(int n){
	int sum=0,i;
	for(i=1;i<=n;i++)
	sum+=i;
    return sum;
}
int main()
{
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum+=fun(i);
	printf("%d\n",sum);
	return 0;
}
