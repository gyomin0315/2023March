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

		printf("�ܾ �Է��Ͻÿ�:");
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

// ���� �ڵ�� �ٸ��� "."�� ���� �Է��� �ʿ� ����, �׳� �ܾ� �ڿ� "."�� ������, �Է� ������ �ְԲ� ����.
// break�� ������ ������, for���� ���������°� �ۿ� ���� �ʾƼ�, goto�� �ذ�.

// strcat(�ּ�1, �ּ�2) => �ּ�2�� ���ڿ��� �ּ�1�� ���ڿ� ���κп� �����Ų��. �ּ�1�� ������� �˳��ؾ��Կ� ����.