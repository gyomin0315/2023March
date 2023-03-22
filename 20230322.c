// 이름을 student.h로, 솔루션 탐색기 -> 헤더 파일에 파일 만들기. 그 후, student.h 에 다음 내용 쓰기
/*
typedef struct
{
	int num;
	char name[20];

}Student;
*/


#include <stdio.h>

#include "student.h"

int main(void)
{
	Student a = { 315,"홍길동" };

	printf("학번 : %d, 이름 : %s\n", a.num, a.name);

	return 0;

}

//출력 결과
/*
학번 : 315, 이름 : 홍길동
*/

// 반드시 헤더파일을 추가할때 .c가 아니라, 이름을 그대로 stduent.h 와 같이 헤더파일로 만들어야함. 