/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100] = "";
	char str2[100] = "";
	char word1[10] = "";
	char word2[10] = "";
	char word3[10] = "";
	printf("Write I love you :");
	gets(str1);

	sscanf(str1, "%s %s %s", &word1, &word2, &word3);

	sprintf(str2, "주어 : %s, 동사 : %s, 목적어 : %s", word1,word2,word3);

	printf("%s", str2);


	return 0;


}
*/

// 문장을 입력받아서, 띄어쓰기가 된 단어들을 잘라서 분배하고 싶으면 sscanf에 %s쓰면 됨. sprintf 할때도 마찬가지.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
	printf("문장을 입력하시오 : ");
	char str1[100] = "";
	char* p = str1;
	gets(str1);

	int i;

	if (isupper(str1[0]))
	{
		str1[0] = tolower(str1[0]);
	}

	for (i = 1; i < strlen(str1); i++)
	{

		
		str1[i] = toupper(str1[i]);

		if (str1[i] == ' ')
		{
			i++;
		}



	}

	printf("%s", str1);

	return 0;



}

//출력 결과
/*
문장을 입력하시오 : My name is gyomin
mY nAME iS gYOMIN
*/