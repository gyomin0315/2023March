
/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100] ;

	printf("문장을 입력하시오 :");
	gets(str1);
	puts(str1);

	return 0;




}
*/
//출력 결과
/*
문장을 입력하시오 :my name is gyomin
my name is gyomin

*/

// 자동으로 puts가 \n출력 해준 모습.
/*

gets(주소1)는 scanf과 비슷한 역할을 함. 단, char형으로 문자열을 입력받고, 그 문자열을 주소1에 저장해줌. 이때 맨 끝에 NULL문자도 gets가 알아서 해줌.
버퍼 오버플로우 문제 때문에 gets_s 쓸수도 있음.
(주소1, 문자열의 크기)

puts(주소1) 은, 주소1의 문자열을 NULL이 나올때까지 출력해줌. 다 출력했으면 \n자동적으로 출력.

sscanf는 주소1에 저장되어 있는 데이터를 주소2, 주소3에 따로따로 저장하겠다는 의미.

sscanf(주소1, "데이터형2 데이터형3",주소2,주소3);

ex) sscanf(str1,"%s%s",str2,str3);

*** sscanf는 공백문자를 기준으로 데이터를 구분하게 된다. scanf와 마찬가지로. 

sprintf는 주소2,주소3에 저장되어있는 데이터를 주소1에 합치겠다는 의미.

sprintf(주소1,"데이터형",값2,값3);

sscanf에서의 데이터형은 주소1에 있는 값을 어떤 식으로 주소2, 주소3에 저장하겠다의 의미로 써주고,
sprintf에서의 데이터형은 주소1에 어떤 식으로 저장하겠다의 의미로 정해줘야함. 
즉, sscanf, sprintf모두 뒤에 나올 주소 혹은 값의 데이터형에 따름. 



*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>

int main(void)
{

	char str1[100] = "";
	char str2[100] = "";

	int year=0, month=0, day=0;

	printf("날짜를 입력하시오 : yyyymmdd");
	gets(str1);

	sscanf(str1, "%4d%2d%2d", &year, &month, &day);

	sprintf(str2, "Due date : %d-%d-%d", year, month, day);
	puts(str2);


}

//출력 결과

/*
날짜를 입력하시오 : yyyymmdd20230307
Due date : 2023-3-7

*/

