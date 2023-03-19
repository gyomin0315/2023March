// malloc.c

#include <stdio.h>

#include<stdlib.h> // �̰� �־�� malloc, free �Լ� ��� ����.

int main(void)

{

	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));

	if (pi == NULL)
	{

		printf("�޸𸮰� ����\n");
		exit(1); // �̰ɷ� ���α׷� ���� ����.
	}

	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi); // �̰ŷ� ���� �Ҵ� ���ذ� ��ȯ
	free(pd);

	return 0;



}

//��� ���
/*
���������� ��� : 10
�Ǽ������� ��� : 3.4

*/


