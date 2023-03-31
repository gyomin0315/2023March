/*
#include <stdio.h>

union student
{
	int num;
	double grade;

};

int main(void)
{

	union student s1 = { 315 }; // 공용체의 초기화는 중괄호를 사용하여 첫 번째 멤버만 초기화.

	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1f\n", s1.grade);
	printf("학번 : %d\n", s1.num);
	
	return 0;



}
*/
//출력 결과
/*
학번 : 315
학점 : 4.4
학번 : -1717986918
*/

// union은 구조체인데, 모든 멤버가 하나의 저장공간을 같이 사용. 가장 큰 크기의 멤버로 크기 결정.

#include <stdio.h>

enum season {SPRING, SUMMER, FALL , WINTER}; // 각각 0,1,2,3으로 컴파일

int main(void)
{
	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swimming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "skiing";
		break;
	}

		printf("나의 레저 활동 : %s\n", pc);

		return 0;

	}

//출력 결과
/*
나의 레저 활동 : inline
*/



