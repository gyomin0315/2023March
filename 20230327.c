#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{

	char name[20];
	int age;
	double height;
	char* intro;


};

int main(void)
{
	struct profile min;

	strcpy(min.name, "������");
	min.age = 25;
	min.height = 170.0;

	min.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� :");
	gets(min.intro);

	printf("�̸� : %s\n", min.name);
	printf("���� : %d\n", min.age);
	printf("Ű : %.1f\n", min.height);
	printf("�ڱ�Ұ� : %s\n", min.intro);

	free(min.intro);

	return 0;


}

//��� ���
/*
�ڱ�Ұ� : �ȳ��ϼ���
�̸� : ������
���� : 25
Ű : 170.0
�ڱ�Ұ� :  �ȳ��ϼ���
*/
