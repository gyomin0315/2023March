/*
#include <stdio.h>

struct student
{
	int num;
	double grade;


};

int main(void)
{

	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("��ȣ : %d\n", s1.num);
	printf("���� : %.1f\n", s1.grade);

	return 0;



}
*/
//��� ���
/*
��ȣ : 2
���� : 2.7

*/

#include <stdio.h>

struct student
{
	int id;
	char name[20];
	double grade;


};

int main(void)
{
	struct student s1 = { 314,"������",2.4 }, s2 = { 315,"ȫ�浿",3.1 };

	struct student max;

	if (s1.grade > s2.grade)
	{
		max = s1;
	}
	else
	{
		max = s2;
	}

	printf("��ȣ : %d, �̸� : %s,����  : %.1f", max.id, max.name, max.grade);


}

//��� ���
/*
��ȣ : 315, �̸� : ȫ�浿,����  : 3.1
*/

