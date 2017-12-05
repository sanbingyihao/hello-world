#include<stdio.h>
double Func(double x,double y);
int main(void)
{
	double a=100.0,b,sD;
	printf("请输入一个实数:");
	scanf("%lf",&b);
	sD=Func(a,b);
	printf("The Spuare Difference is %lf.\n",sD);
	return 0; 
 } 
 double Func(double x,double y)
 {
 	double z;
 	z=(x+y)*(x-y);
 	return z;
 }
