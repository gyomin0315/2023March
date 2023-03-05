#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



int main(void)
{
	char sentence[100] = "";
	char word[20] = "";
	//char word[20] = "";
	int i;

	do
	{

		printf("단어를 입력하시오:");
		scanf("%s", word);
		
		strcat(sentence, word);
		strcat(sentence, " ");

		for (i = 0; i < strlen(word); i++)
		{
			if (word[i] == '.')
			{
				goto here;
			}
		}

	} while (1);
	
	here:
	printf("\n%s", sentence);
	return 0;

}

// 원래 코드랑 다르게 "."을 따로 입력할 필요 없이, 그냥 단어 뒤에 "."이 있으면, 입력 끝낼수 있게끔 했음.
// break를 쓰려고 했으나, for문을 빠져나오는것 밖에 되지 않아서, goto로 해결.

// strcat(주소1, 주소2) => 주소2의 문자열을 주소1의 문자열 끝부분에 연결시킨다. 주소1의 사이즈는 넉넉해야함에 주의.