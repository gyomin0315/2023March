// swap_string.c
/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{

	char str1[10] = "";
	char str2[10] = "";
	char temp[10] = "";

	printf("2���� ���ڿ��� �Է��Ͻÿ�:");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);


	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("str1 = %s, str2 = %s", str1, str2);


	return 0;

}
*/
//��� ���
/*
2���� ���ڿ��� �Է��Ͻÿ�:apple banana
str1 = apple, str2 = banana
str1 = banana, str2 = apple
*/

// strcpy(�ּ�1, �ּ�2) = > �ּ�2�� �ִ� ���ڿ��� �ּ�1�� �������.

// compare.c

/*

#include <stdio.h>

#include <string.h>

int main(void)
{
	char s1[10] = "apple";
	char s2[10] = "apple";

	if (s1 == s2)
		printf("s1�� s2�� �ּҴ� �����ϴ�.\n");
	else
		printf("s1�� s2�� �ּҴ� �ٸ��ϴ�.\n");

	if (strcmp(s1, s2) == 0)
		printf("s1�� s2�� ������ �����ϴ�.");
	else
		printf("s1�� s2�� ������ �ٸ��ϴ�.");

	return 0;


}
*/
//��� ���
/*
s1�� s2�� �ּҴ� �ٸ��ϴ�.
s1�� s2�� ������ �����ϴ�.
*/

// strcmp(�ּ�1, �ּ�2) => �ּ�1�� ����� �ּ�2�� ������ ������ 0��ȯ, �ּ�1 - �ּ�2 (ASCII �ڵ�) ������� ���� �� ũ�� 1, ���� �� ������ -1 ��ȯ.


#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[10] = "apple";
	char s2[10] = "apple";

	printf("%d", strcmp(s1, s2));

	return 0;


}

//��� ���
/*
0
*/