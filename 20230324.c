#include <stdio.h>

#define VER 7
#define BIT16

int main(void)
{

	int max;

#if VER>=6
	printf("���� %d�Դϴ�.\n", VER);

#endif

#ifdef BIT16 // �� BIT16�� ���ǵǾ��ִٸ�
	max = 32767;
#else
	max = 2147483647;
#endif

	printf("int�� ������ �ִ� : %d\n", max);

	return 0;



}

//��� ���
/*
���� 7�Դϴ�.
int�� ������ �ִ� : 32767
*/