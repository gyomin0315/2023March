#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하시오:");
		gets(temp);

		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);



	}
	for (i = 0; i < 3; i++)
	{

		printf("%s\n", str[i]);

	}
	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}

	return 0;

}

//출력 결과
/*
문자열을 입력하시오:my name is gyomin
문자열을 입력하시오:.
문자열을 입력하시오:Bye
my name is gyomin
.
Bye
*/