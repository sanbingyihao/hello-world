#include<stdio.h> 
#include<string.h> 
int main() 
{ 
char digits[100], i, n; 
scanf("%s",digits); 
n = strlen(digits); 
for(i=0;i<n/2;i++) 
{ 
if(digits[i]!=digits[n-i-1]) 
{ 
printf("no\n"); 
return 0; 
} 
} 
printf("yes\n"); 
return 0; 
}
