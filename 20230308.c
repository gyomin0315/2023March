/*
#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[100] = "";

	int year = 0, month = 0, day = 0;
	printf("yyyymmdd? :");
	gets(str1);

	sscanf(str1, "%d%d%d", &year, &month, &day);

	// yyyy mm dd ó�� ���⸦ ��ٸ�, �� sscanfó�� �׳� %d%d%d�� ���൵ ������. ���⸦ �������� data �������µ�.
	// ���Ⱑ ���ٸ�, %4d%2d%2dó�� ��𼭺��� ������ year�� �ְ�, month�� �ְ�..�� �����������.
	// sscanf�� �ڿ� �ݵ�� �ּ� ���� �ϰ�, sprintf�� �׳� �� ���°� ����.

	//printf("%d %d %d", year, month, day);

	sprintf(str1, "���� : %d, �� : %d, �� : %d", year, month, day);
	//printf("%s", str1);

	puts(str1);

	
}
*/
//��� ���
/*
yyyymmdd? :2023 03 08
���� : 2023, �� : 3, �� : 8

*/

// ���� ó�� �Լ�.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // ���� ó�� ���̺귯�� ���� �ʿ�

int main(void)
{
	char str1[] = "my name is gyo min";
	char* p = str1;

	while (1)
	{
		if (islower(*p)) // p�� ����Ű�� ���� �ҹ��� �ΰ�? 
		{
			*p = toupper(*p); // p�� ����Ű�� ���� �빮�ڷ� �ٲٱ�. 
		}
		p = strchr(p, ' '); // ���� ���ڸ� ã�Ƽ� �� �ּҸ� p�� ����. 
		if (p == NULL)
		{
			break;
		}
		p++;


	}



	printf("%s", str1);

}

//��� ���
/*
My Name Is Gyo Min
*/

// isupper, islower�� ���� Ȥ�� ���ڰ� ���� �빮������, �ҹ��� ���� Ȯ������. �ƴ϶�� 0��ȯ, �´ٸ� 0�� �ƴ� �� ��ȯ.

// toupper, tolower�� ���� �빮�ڷ�, �ҹ��ڷ� �ٲ��ִ°Ű�, �ٸ� ���ڵ��� �׳� �Ȱ��� ���� ��� ��ȯ.



