#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{

	char name[20];
	int age;
	double height;
	char* intro;


};

int main(void)
{
	struct profile min;

	strcpy(min.name, "구교민");
	min.age = 25;
	min.height = 170.0;

	min.intro = (char*)malloc(80);
	printf("자기소개 :");
	gets(min.intro);

	printf("이름 : %s\n", min.name);
	printf("나이 : %d\n", min.age);
	printf("키 : %.1f\n", min.height);
	printf("자기소개 : %s\n", min.intro);

	free(min.intro);

	return 0;


}

//출력 결과
/*
자기소개 : 안녕하세요
이름 : 구교민
나이 : 25
키 : 170.0
자기소개 :  안녕하세요
*/
