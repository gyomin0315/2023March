// 매크로 함수

#include <stdio.h>

#define SUM(a,b) a+b
#define MUL(a,b) a*b

int main(void)
{
	int a = 10, b = 20;
	int x = 30, y = 40;

	int res;

	printf("a+b = %d\n", SUM(a, b));
	printf("x+y = %d\n", SUM(x, y));

	res = 30 / MUL(2, 5);

	printf("res = %d", res);

	return 0;


}
//출력 결과
/*
a+b = 30
x+y = 70
res = 75
*/

