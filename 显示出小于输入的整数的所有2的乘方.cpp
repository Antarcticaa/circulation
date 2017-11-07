#include<stdio.h>
#include<math.h>
int main(){
	int no,n=2,z,y=2;
	printf("please input a integer:"); scanf("%d",&no);
    while(y<no){y=pow(2,n++); 
	z=y/2;
    printf("%d\n",z);} 
	return 0;
}
