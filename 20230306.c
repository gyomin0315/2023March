// find.c
/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[100] = "";

	char* p = NULL;

	printf("������ �̸��� �Է��Ͻÿ� :");
	scanf("%s", filename);

	p = strchr(filename,'.');

	if (p != NULL)
	{
		printf("%s",p+1);
	}

	p = NULL;

	p = strstr(filename, ".txt");

	if (p != NULL)
	{
		printf("\n������ ���´� txt");
	}

	return 0;

}
*/

// strtok.c (string token)

#define _CRT_SECURE_NO_WARNINGS // strtok ���� �̰� �ʿ�.

#include <stdio.h>
#include <string.h>

int main(void)
{
	char phone[] = "010-2134-1262";
	char* p=NULL;

	p=strtok(phone, "-");
	printf("%s\n", p);

	p = strtok(NULL, "-");
	printf("%s\n", p);

	p = strtok(NULL, "-");
	printf("%s\n", p);

	
	return 0;



}

//��� ���
/*
010
2134
1262
*/
