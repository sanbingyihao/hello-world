#include<stdio.h> 
int main()
{
	double a,b,x;
	printf("请输入一元一次方程ax=b的系数a,b:"); 
	scanf("%f%f",&a,&b);
	x=b/a;
	printf("一元一次方程的根是：x=%f\n",a,b,x);
	return 0;
}

