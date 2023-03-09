// const_pointer.c
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_space(const char* s) // 받아오는 값은 변경되지 않음.
{
	int count = 0;
	while (*s != '\0')
	{
		if (isspace(*s)) // s가 가리키는 값이 space인지 아닌지 확인. 아니면 0반환. 
			count++;

		s++;


	}

	return count;
}

int main(void)
{
	char str1[] = "my name is \t gyomin.\n"; // \t는 tab을 의미.

	puts(str1);

	printf("공백의 갯수는 : %d", count_space(str1));
	return 0;
		
}
*/
//출력 결과
/*
my name is       gyomin.

공백의 갯수는 : 6
*/

// 배열은 동일한 자료형이 연속적으로 모여있는 반면, 구조체는 연속적인, 그리고 동일 or 동일하지 않은 자료형의 모임. 즉, 구조체는 사용자 정의 자료형이라고 할 수 있다.

// struct.c

#include <stdio.h>

// 구조체는 소스 파일 시작 부분에 정의

struct content
{
	char title[40];
	int price;
	double rate;

};

int main(void)
{
	printf("구조체의 크기 : %d", sizeof(struct content));
	return 0;

}

#pragma pack(show) // 컴파일러의 메모리 정렬 정보를 출력창에 경고로 표시.

//출력 결과
/*
구조체의 크기 : 56

pragma pack(show)의 값 == 16	Everyday_C_study	C:\Users\82107\source\repos\Everyday_C_study\20230309.c	64

*/

// size 52가 아니라, 56이 나온 이유는, 64bit 환경에서는 8byte 단위로 메모리 잡기 때문. int price가 4byte 가 아닌, 8byte 잡아먹는다.