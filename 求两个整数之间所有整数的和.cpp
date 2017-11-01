#include <stdio.h>
int main(){
	int a,b,i,j,sum=0;
	puts("please input two integers");
	printf("integer1:");scanf("%d",&a);
	printf("integer2:");scanf("%d",&b);
	if(a>b) {i=a,j=b;}
	else {i=b,j=a;}
	do{
		sum+=j;
		j++;
	}while(j<=i);
	printf("sum between a and b = %d.\n",sum); 
	return 0;
} 
