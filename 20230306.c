// find.c
/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[100] = "";

	char* p = NULL;

	printf("파일의 이름을 입력하시오 :");
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
		printf("\n파일의 형태는 txt");
	}

	return 0;

}
*/

// strtok.c (string token)

#define _CRT_SECURE_NO_WARNINGS // strtok 쓸때 이거 필요.

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

//출력 결과
/*
010
2134
1262
*/
