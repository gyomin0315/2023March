// void ������. ����Ű�� �ڷ����� �ٸ� �ּҸ� �����ϴ� ��� ���

#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.5;

	void* vp;

	vp = &a;
	printf("a ; %d\n", *(int *)vp); // vp�� int�� �������̴� ����.

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;


}

//��� ���
/*
a ; 10
b : 3.5

*/