#include<stdio.h>
int main(void){
	int no,i=0;
	do{
		printf("������һ����������"); scanf("%d",&no);
		if(no<=0)
		puts("\a�벻Ҫ�������������"); 
	}while(no<=0);
	printf("������������ʾ�Ľ����");
	while(no>0){
		printf("%d",no%10);
		no/=10;
		++i;
	} 
	puts("��");
	printf("����������λ���ǣ�%d",i);
	return 0;
}
