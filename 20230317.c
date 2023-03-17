// 포인터 함수
/*
#include <stdio.h>

int sum(int a, int b);

int main(void)
{

	int (*fp)(int, int);
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n", res);

	return 0;


}

int sum(int a, int b)
{
	return (a + b);

}
*/
//출력 결과
/*
result : 30

*/

// 컴파일 될떄 함수 이름이 그 함수의 주솟값으로 바뀜 !
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void func(int (*fp)(int, int));

int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
	int sel;

	printf("01 : 두 정수의 합\n");
	printf("02 : 두 정수의 곱\n");
	printf("03 : 두 정수중 큰 값 출력\n");
	printf("원하는 연산 선택 1~3:");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(max); break;

	}

	return 0;



}

void func(int (*fp)(int, int))
{

	int a, b;
	int res;

	printf("두 정수의 값을 입력 :");
	scanf("%d %d", &a, &b);
	res = fp(a, b);
	printf("결과값은 : %d\n", res);


}

int sum(int a, int b)
{
	return (a + b);


}

int mul(int a, int b)
{
	return (a * b);


}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;


}

//출력 결과
/*
01 : 두 정수의 합
02 : 두 정수의 곱
03 : 두 정수중 큰 값 출력
원하는 연산 선택 1~3:2
두 정수의 값을 입력 :10 20
결과값은 : 200
*/
