/*
#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score min = { 90,80,70 };
	struct score* ps = &min;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);

	return 0;




}
*/
//출력 결과
/*
국어 : 90
영어 : 80
수학 : 70
*/

#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];

};

int main(void)
{
	struct address list[5] = {

		{"구교민1",10,"111-1111","서울"},
		{"구교민2",11,"222-2222","대전"},
		{"구교민3",12,"333-3333","대구"},
		{"구교민4",13,"444-4444","부산"},
		{"구교민5",14,"555-5555","인천"}


	};

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d : %10s%5d%15s%20s\n", i,list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0;



}

//출력 결과
/*
0 :    구교민1   10       111-1111                서울
1 :    구교민2   11       222-2222                대전
2 :    구교민3   12       333-3333                대구
3 :    구교민4   13       444-4444                부산
4 :    구교민5   14       555-5555                인천

*/

