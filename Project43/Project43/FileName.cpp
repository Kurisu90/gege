#include<stdio.h>
#include<iostream>
int COP(int* arr, int n) {
	while (n != 0) {
		printf("%.1f\t�з�ͷ\t", ((float)(*arr))/10);
		n -= 1;
	}printf("\n");
	return 0;
}
int CC(int ax, int bx) {
	while(ax>bx){
		printf("����ﰥ��~\t");
		ax -= 1;
    }printf("\n");
	return 0;
}
int (*fp)(int* arr, int n);
int(*fq)(int ax, int bx);

int main(void) {
	char input;
	printf("�������к���ٻ��������Կ����з�Ŷ~");
	printf("\n����~mua~�����峺�İ�������cxk��(����gege������״��Сд��ĸ��+enter�Կ�ʼ��������)");
	while ((input = getchar()) != 'o');
	int n = 10;
	int a = 25;
	int* arr = &a;
	int i;
	for (i = 100; i != 0; i--) {
		if (i % 2 == 0) {
			fp = COP;
			fp(arr, n);
		}
		else {
			fq = CC;
			fq(a, n);
		}
	}
	
}