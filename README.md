#include<stdio.h>
#include<iostream>
int COP(int* arr, int n) {
	while (n != 0) {
		printf("%.1f\t中分头\t", ((float)(*arr))/10);
		n -= 1;
	}printf("\n");
	return 0;
}
int CC(int ax, int bx) {
	while(ax>bx){
		printf("你干嘛哎呦~\t");
		ax -= 1;
    }printf("\n");
	return 0;
}
int (*fp)(int* arr, int n);
int(*fq)(int ax, int bx);

int main(void) {
	char input;
	printf("程序运行后快速滑动光标可以看见中分哦~");
	printf("\n爱你~mua~——清澈的爱，来自cxk。(输入gege蛋的形状（小写字母）+enter以开始程序运行)");
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
