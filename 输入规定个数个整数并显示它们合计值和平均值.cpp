#include<stdio.h>
int main(){
	int i=0,sum=0,num,tmp;
	printf("how many integer you'd like to input?");scanf("%d,num",&num);
	while(i<num){
		printf("No.%d:",++i);
		scanf("%d",&tmp);
		sum+=tmp;
	} 
	printf("sum=%d\n",sum);
	printf("average=%.2f\n",(double)sum/num);
	return 0;
} 
