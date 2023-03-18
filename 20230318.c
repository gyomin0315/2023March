// void 포인터. 가리키는 자료형이 다른 주소를 저장하는 경우 사용

#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.5;

	void* vp;

	vp = &a;
	printf("a ; %d\n", *(int *)vp); // vp는 int형 포인터이다 선언.

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;


}

//출력 결과
/*
a ; 10
b : 3.5

*/