/*
#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score min = { 90,80,70 };
	struct score* ps = &min;

	printf("���� : %d\n", (*ps).kor);
	printf("���� : %d\n", ps->eng);
	printf("���� : %d\n", ps->math);

	return 0;




}
*/
//��� ���
/*
���� : 90
���� : 80
���� : 70
*/

#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];

};

int main(void)
{
	struct address list[5] = {

		{"������1",10,"111-1111","����"},
		{"������2",11,"222-2222","����"},
		{"������3",12,"333-3333","�뱸"},
		{"������4",13,"444-4444","�λ�"},
		{"������5",14,"555-5555","��õ"}


	};

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d : %10s%5d%15s%20s\n", i,list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0;



}

//��� ���
/*
0 :    ������1   10       111-1111                ����
1 :    ������2   11       222-2222                ����
2 :    ������3   12       333-3333                �뱸
3 :    ������4   13       444-4444                �λ�
4 :    ������5   14       555-5555                ��õ

*/

