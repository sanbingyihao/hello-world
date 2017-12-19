#include <stdio.h>
int main(void)
{
int a,b,year,month,day,count=0;
int mon[12]={0,31,28,31,30,31,30,31,31,30,31,30};
printf("Please input year month day like this xxxx,xx,xx\n");
scanf("%d,%d,%d",&year,&month,&day);
for(a=1900;a<year;a++)
if(a%100!=0&&a%4==0||a%400==0)
count+=2;
else
count+=1;
for(a=1;a<month;a++)
{count+=mon[a];
if(a==2&&year%100!=0&&year%4==0||year%400==0)
count++;
}
count+=day;
b=count%7;
switch(b)
{
case 0:
printf("The day is Monday\n");
break;
case 1:
printf("The day is Tuesday\n");
break;
case 2:
printf("The day is Wednesday\n");
break;
case 3:
printf("The day is Thursday\n");
break;
case 4:
printf("The day is Friday\n");
break;
case 5:
printf("The day is Satday\n");
break;
case 6:
printf("The day is Sunday\n");
break;
}
}
