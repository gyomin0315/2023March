// �̸��� student.h��, �ַ�� Ž���� -> ��� ���Ͽ� ���� �����. �� ��, student.h �� ���� ���� ����
/*
typedef struct
{
	int num;
	char name[20];

}Student;
*/


#include <stdio.h>

#include "student.h"

int main(void)
{
	Student a = { 315,"ȫ�浿" };

	printf("�й� : %d, �̸� : %s\n", a.num, a.name);

	return 0;

}

//��� ���
/*
�й� : 315, �̸� : ȫ�浿
*/

// �ݵ�� ��������� �߰��Ҷ� .c�� �ƴ϶�, �̸��� �״�� stduent.h �� ���� ������Ϸ� ��������. 