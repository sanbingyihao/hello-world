#include<stdio.h>
int main()
{
	int x,y;
	double a,b,c,d,m,n;
	printf("�����뷽��ax+by=m,cx+dy=n�е�a,b,c,d,m,n��");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);
	printf("��Ԫһ�η��̵Ľ�Ϊ��x=%lf\n,y=%lf\n",x,y);
	return 0;
 } 
 
