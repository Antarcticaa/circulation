#include<stdio.h>
int main(){
	int no,i,sum=0,sum1=0;
	scanf("%d",&no);
    for(i=0;i<=no;i++){sum+=i;sum1+=sum;}
    printf("%d\n",sum1);
    return 0;
}
