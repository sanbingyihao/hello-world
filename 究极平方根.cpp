#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float b;
	printf("������һ������n��ʾ��n�����ݣ�");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=0)
		{
			b=sqrt(a[i]);
			printf("%.2f\n",b);
		 } 
		 else
		 {
		 	printf("ERROR\n");
		 }
	}
	return 0;
	
}
