// const_pointer.c
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_space(const char* s) // �޾ƿ��� ���� ������� ����.
{
	int count = 0;
	while (*s != '\0')
	{
		if (isspace(*s)) // s�� ����Ű�� ���� space���� �ƴ��� Ȯ��. �ƴϸ� 0��ȯ. 
			count++;

		s++;


	}

	return count;
}

int main(void)
{
	char str1[] = "my name is \t gyomin.\n"; // \t�� tab�� �ǹ�.

	puts(str1);

	printf("������ ������ : %d", count_space(str1));
	return 0;
		
}
*/
//��� ���
/*
my name is       gyomin.

������ ������ : 6
*/

// �迭�� ������ �ڷ����� ���������� ���ִ� �ݸ�, ����ü�� ��������, �׸��� ���� or �������� ���� �ڷ����� ����. ��, ����ü�� ����� ���� �ڷ����̶�� �� �� �ִ�.

// struct.c

#include <stdio.h>

// ����ü�� �ҽ� ���� ���� �κп� ����

struct content
{
	char title[40];
	int price;
	double rate;

};

int main(void)
{
	printf("����ü�� ũ�� : %d", sizeof(struct content));
	return 0;

}

#pragma pack(show) // �����Ϸ��� �޸� ���� ������ ���â�� ���� ǥ��.

//��� ���
/*
����ü�� ũ�� : 56

pragma pack(show)�� �� == 16	Everyday_C_study	C:\Users\82107\source\repos\Everyday_C_study\20230309.c	64

*/

// size 52�� �ƴ϶�, 56�� ���� ������, 64bit ȯ�濡���� 8byte ������ �޸� ��� ����. int price�� 4byte �� �ƴ�, 8byte ��ƸԴ´�.