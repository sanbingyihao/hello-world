#include<stdio.h>
int main()
{
	int x,y;
	double a,b,c,d,m,n;
	printf("请输入方程ax+by=m,cx+dy=n中的a,b,c,d,m,n：");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);
	printf("二元一次方程的解为：x=%lf\n,y=%lf\n",x,y);
	return 0;
 } 
 
