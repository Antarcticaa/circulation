#include<stdio.h>
int main(void){
	int i,j,len;
	puts("����ֱ�������·��ĵ���ֱ��������");
	printf("�̱ߣ�"); scanf("%d",&len);
	for(i=1;i<=len;i++){
	for(j=1;j<=len-i;j++) putchar(' ');  //�Ƚ������ѭ�� �� 
    for(j=1;j<=i;j++)  putchar('*');     // ѭ���ٽ���֮���ڽ���ѭ���� 
	putchar('\n');   //�ڲ�����ѭ����һ�У���������л��� 
	}
	return 0;
} 
