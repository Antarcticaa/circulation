#include<stdio.h>
int main(){
	int no,i=0,n;
	printf("������");scanf("%d",&n);
	do{
	printf("������");scanf("%d",&no);
	while(no-->0)putchar('*');
	putchar('\n');
	i++;
	}while(i<n); 
	return 0;
} 
