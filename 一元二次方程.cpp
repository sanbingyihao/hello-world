#include <stdio.h>
#include <math.h>
void CaculateRealRoot(double a1,double b1,double c1);
int main(void)
{
	double a,b,c;
	printf("�����������ϵ��a:");
	scanf("%lf",&a);
	printf("������һ����ϵ��b:");
	scanf("%lf",&b);
	printf("�����볣����c:");
	scanf("%lf",&c);
	CaculateRealRoot(a,b,c);
	return 0;
 } 
 void CaculateRealRoot(double a1,double b1,double c1)
 {
 	double delta,x1,x2;
 	delta=b1*b1-4*a1*c1;
 	if(delta<0)
	 {
	 	printf("û��ʵ��.\n");
	 }
	 else
	 {
	 	if(delta==0)
	 	{
	 		x1=-b1/(2*a1);
	 		x2=-b1/(2*a1);
	 		printf("x1=%lf,x2=%lf.\n",x1,x2);
		 }
		 else
		 {
		 	x1=(-b1+sqrt(delta))/(2*a1);
		 	x2=(-b1-sqrt(delta))/(2*a1);
		 	printf("x1=%lf,x2=%lf.\n",x1,x2);
		 }
	 }
 }
