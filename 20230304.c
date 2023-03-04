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

	printf("2개의 문자열을 입력하시오:");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);


	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("str1 = %s, str2 = %s", str1, str2);


	return 0;

}
*/
//출력 결과
/*
2개의 문자열을 입력하시오:apple banana
str1 = apple, str2 = banana
str1 = banana, str2 = apple
*/

// strcpy(주소1, 주소2) = > 주소2에 있는 문자열을 주소1에 덮어씌워라.

// compare.c

/*

#include <stdio.h>

#include <string.h>

int main(void)
{
	char s1[10] = "apple";
	char s2[10] = "apple";

	if (s1 == s2)
		printf("s1과 s2의 주소는 같습니다.\n");
	else
		printf("s1과 s2의 주소는 다릅니다.\n");

	if (strcmp(s1, s2) == 0)
		printf("s1과 s2의 내용은 같습니다.");
	else
		printf("s1과 s2의 내용은 다릅니다.");

	return 0;


}
*/
//출력 결과
/*
s1과 s2의 주소는 다릅니다.
s1과 s2의 내용은 같습니다.
*/

// strcmp(주소1, 주소2) => 주소1의 내용과 주소2의 내용이 같으면 0반환, 주소1 - 주소2 (ASCII 코드) 방식으로 앞이 더 크면 1, 앞이 더 작으면 -1 반환.


#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[10] = "apple";
	char s2[10] = "apple";

	printf("%d", strcmp(s1, s2));

	return 0;


}

//출력 결과
/*
0
*/