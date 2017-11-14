#include<stdio.h>
int main(void){
	int i,j,len;
	puts("生成直角在右下方的等腰直角三角形");
	printf("短边："); scanf("%d",&len);
	for(i=1;i<=len;i++){
	for(j=1;j<=len-i;j++) putchar(' ');  //先进行这个循环 ① 
    for(j=1;j<=i;j++)  putchar('*');     // 循环①结束之后在进行循环② 
	putchar('\n');   //内部两个循环（一行）结束后进行换行 
	}
	return 0;
} 
