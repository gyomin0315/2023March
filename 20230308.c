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

	// yyyy mm dd 처럼 띄어쓰기를 썼다면, 위 sscanf처럼 그냥 %d%d%d만 써줘도 괜찮음. 띄어쓰기를 기점으로 data 나눠지는듯.
	// 띄어쓰기가 없다면, %4d%2d%2d처럼 어디서부터 어디까지 year에 넣고, month에 넣고..를 지정해줘야함.
	// sscanf는 뒤에 반드시 주소 들어가야 하고, sprintf는 그냥 값 들어가는것 조심.

	//printf("%d %d %d", year, month, day);

	sprintf(str1, "연도 : %d, 달 : %d, 일 : %d", year, month, day);
	//printf("%s", str1);

	puts(str1);

	
}
*/
//출력 결과
/*
yyyymmdd? :2023 03 08
연도 : 2023, 달 : 3, 일 : 8

*/

// 문자 처리 함수.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // 문자 처리 라이브러리 사용시 필요

int main(void)
{
	char str1[] = "my name is gyo min";
	char* p = str1;

	while (1)
	{
		if (islower(*p)) // p가 가리키는 값이 소문자 인가? 
		{
			*p = toupper(*p); // p가 가리키는 값을 대문자로 바꾸기. 
		}
		p = strchr(p, ' '); // 공백 문자를 찾아서 그 주소를 p에 저장. 
		if (p == NULL)
		{
			break;
		}
		p++;


	}



	printf("%s", str1);

}

//출력 결과
/*
My Name Is Gyo Min
*/

// isupper, islower는 문자 혹은 숫자가 각각 대문자인지, 소문자 인지 확인해줌. 아니라면 0반환, 맞다면 0이 아닌 수 반환.

// toupper, tolower는 각각 대문자로, 소문자로 바꿔주는거고, 다른 문자들은 그냥 똑같이 들어온 대로 반환.



