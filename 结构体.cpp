#include<stdio.h>
#define n 2
int main(){
	struct birth
	{
		int year;
		int mouth;
		int day; 
	} ;
	struct student
	{
		int num;
		char *name;
		char sex[3];
		int birth;
		float score;
		
	};
	struct student s[n]=
	{
		{10101,"µÂ»ªÁõ","ÄĞ",1,98.1},
		{10102,"ÁùÁãÁù","ÄĞ",2,1.1}
		
	};

	
	for(int i=0;i<2;i++){
		printf("%8d",s[i].num);
		printf("%8s",s[i].name);
		printf("\n");
		
	}
	return 0;
} 
