
/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100] ;

	printf("������ �Է��Ͻÿ� :");
	gets(str1);
	puts(str1);

	return 0;




}
*/
//��� ���
/*
������ �Է��Ͻÿ� :my name is gyomin
my name is gyomin

*/

// �ڵ����� puts�� \n��� ���� ���.
/*

gets(�ּ�1)�� scanf�� ����� ������ ��. ��, char������ ���ڿ��� �Է¹ް�, �� ���ڿ��� �ּ�1�� ��������. �̶� �� ���� NULL���ڵ� gets�� �˾Ƽ� ����.
���� �����÷ο� ���� ������ gets_s ������ ����.
(�ּ�1, ���ڿ��� ũ��)

puts(�ּ�1) ��, �ּ�1�� ���ڿ��� NULL�� ���ö����� �������. �� ��������� \n�ڵ������� ���.

sscanf�� �ּ�1�� ����Ǿ� �ִ� �����͸� �ּ�2, �ּ�3�� ���ε��� �����ϰڴٴ� �ǹ�.

sscanf(�ּ�1, "��������2 ��������3",�ּ�2,�ּ�3);

ex) sscanf(str1,"%s%s",str2,str3);

*** sscanf�� ���鹮�ڸ� �������� �����͸� �����ϰ� �ȴ�. scanf�� ����������. 

sprintf�� �ּ�2,�ּ�3�� ����Ǿ��ִ� �����͸� �ּ�1�� ��ġ�ڴٴ� �ǹ�.

sprintf(�ּ�1,"��������",��2,��3);

sscanf������ ���������� �ּ�1�� �ִ� ���� � ������ �ּ�2, �ּ�3�� �����ϰڴ��� �ǹ̷� ���ְ�,
sprintf������ ���������� �ּ�1�� � ������ �����ϰڴ��� �ǹ̷� ���������. 
��, sscanf, sprintf��� �ڿ� ���� �ּ� Ȥ�� ���� ���������� ����. 



*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>

int main(void)
{

	char str1[100] = "";
	char str2[100] = "";

	int year=0, month=0, day=0;

	printf("��¥�� �Է��Ͻÿ� : yyyymmdd");
	gets(str1);

	sscanf(str1, "%4d%2d%2d", &year, &month, &day);

	sprintf(str2, "Due date : %d-%d-%d", year, month, day);
	puts(str2);


}

//��� ���

/*
��¥�� �Է��Ͻÿ� : yyyymmdd20230307
Due date : 2023-3-7

*/

