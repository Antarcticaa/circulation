#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=9;++i){ 
		for(j=1;j<=9;++j)
		if(j==1)printf("%3d|",i*j);
		else printf("%3d",i*j);
		if(i==1)printf("\n----------------------------");
		putchar('\n');
	}
	return 0;
} 
