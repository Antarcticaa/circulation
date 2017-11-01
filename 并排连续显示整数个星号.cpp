#include<stdio.h>
int main(){
	int no,i=0,n;
	printf("行数：");scanf("%d",&n);
	do{
	printf("个数：");scanf("%d",&no);
	while(no-->0)putchar('*');
	putchar('\n');
	i++;
	}while(i<n); 
	return 0;
} 
