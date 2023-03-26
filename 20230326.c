/*
#include <stdio.h>

struct student
{
	int num;
	double grade;


};

int main(void)
{

	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("번호 : %d\n", s1.num);
	printf("학점 : %.1f\n", s1.grade);

	return 0;



}
*/
//출력 결과
/*
번호 : 2
학점 : 2.7

*/

#include <stdio.h>

struct student
{
	int id;
	char name[20];
	double grade;


};

int main(void)
{
	struct student s1 = { 314,"구교민",2.4 }, s2 = { 315,"홍길동",3.1 };

	struct student max;

	if (s1.grade > s2.grade)
	{
		max = s1;
	}
	else
	{
		max = s2;
	}

	printf("번호 : %d, 이름 : %s,점수  : %.1f", max.id, max.name, max.grade);


}

//출력 결과
/*
번호 : 315, 이름 : 홍길동,점수  : 3.1
*/

