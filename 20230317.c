// ������ �Լ�
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
//��� ���
/*
result : 30

*/

// ������ �ɋ� �Լ� �̸��� �� �Լ��� �ּڰ����� �ٲ� !
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void func(int (*fp)(int, int));

int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
	int sel;

	printf("01 : �� ������ ��\n");
	printf("02 : �� ������ ��\n");
	printf("03 : �� ������ ū �� ���\n");
	printf("���ϴ� ���� ���� 1~3:");
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

	printf("�� ������ ���� �Է� :");
	scanf("%d %d", &a, &b);
	res = fp(a, b);
	printf("������� : %d\n", res);


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

//��� ���
/*
01 : �� ������ ��
02 : �� ������ ��
03 : �� ������ ū �� ���
���ϴ� ���� ���� 1~3:2
�� ������ ���� �Է� :10 20
������� : 200
*/
