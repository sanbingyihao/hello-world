#include<stdio.h>
int main(void)
{
	int a[10];
	int i,max;
	printf("������10��������");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		max=a[0];
	for(i=1;i<10;i++)
		if(a[i]>max)
			max=a[i];
		printf("���ֵ��%d\n",max);
	return 0;
	 
 } 
