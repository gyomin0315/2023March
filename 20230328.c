#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct vision
{
	double left;
	double right;

};

struct vision exchange(struct vision robot); // 두 시력을 바꿔줄 함수.

int main(void)
{
	struct vision robot;

	printf("시력 입력 : ");
	scanf("%lf %lf", &robot.left, &robot.right);
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;



}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;


}

//출력 결과

/*
시력 입력 : 0.3 0.5
바뀐 시력 : 0.5 0.3
*/
