#include <stdio.h>

#define VER 7
#define BIT16

int main(void)
{

	int max;

#if VER>=6
	printf("버전 %d입니다.\n", VER);

#endif

#ifdef BIT16 // 이 BIT16이 정의되어있다면
	max = 32767;
#else
	max = 2147483647;
#endif

	printf("int형 변수의 최댓값 : %d\n", max);

	return 0;



}

//출력 결과
/*
버전 7입니다.
int형 변수의 최댓값 : 32767
*/