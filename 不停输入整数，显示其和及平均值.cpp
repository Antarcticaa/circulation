#include<stdio.h>
int main(){
	int sum=0;
	int cnt=0;
	int retry;
	do{
	    int t;
		printf("请输入一个整数："); scanf("%d",&t);
		sum=sum+t;
		cnt=cnt+1;
		printf("是否要继续？<yes---0/No---9>:"); scanf("%d",&retry); 
	}while(retry==0);
	printf("它们的和为%d,平均值为%.2f。\n",sum,(double)sum/cnt);
	return 0;
}
