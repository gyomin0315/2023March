/*
#include <stdio.h>

union student
{
	int num;
	double grade;

};

int main(void)
{

	union student s1 = { 315 }; // ����ü�� �ʱ�ȭ�� �߰�ȣ�� ����Ͽ� ù ��° ����� �ʱ�ȭ.

	printf("�й� : %d\n", s1.num);
	s1.grade = 4.4;
	printf("���� : %.1f\n", s1.grade);
	printf("�й� : %d\n", s1.num);
	
	return 0;



}
*/
//��� ���
/*
�й� : 315
���� : 4.4
�й� : -1717986918
*/

// union�� ����ü�ε�, ��� ����� �ϳ��� ��������� ���� ���. ���� ū ũ���� ����� ũ�� ����.

#include <stdio.h>

enum season {SPRING, SUMMER, FALL , WINTER}; // ���� 0,1,2,3���� ������

int main(void)
{
	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swimming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "skiing";
		break;
	}

		printf("���� ���� Ȱ�� : %s\n", pc);

		return 0;

	}

//��� ���
/*
���� ���� Ȱ�� : inline
*/



