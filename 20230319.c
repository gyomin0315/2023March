// malloc.c

#include <stdio.h>

#include<stdlib.h> // 이거 있어야 malloc, free 함수 사용 가능.

int main(void)

{

	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));

	if (pi == NULL)
	{

		printf("메모리가 부족\n");
		exit(1); // 이걸로 프로그램 종료 가능.
	}

	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi); // 이거로 동적 할당 해준거 반환
	free(pd);

	return 0;



}

//출력 결과
/*
정수형으로 사용 : 10
실수형으로 사용 : 3.4

*/


