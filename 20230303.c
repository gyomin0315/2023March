/*
#include <stdio.h>
int main(void) {
    char str1[10] = "abc";         
    char str2[10] = "very long string"; 
    char str3[] = "abc";               
    char str4[10] = "";   

    int i;

    str1[0] = 'A';      

    printf("str1 = ");

    for (i = 0; str1[i] != '\0'; i++)   
        printf("%c", str1[i]); 

    printf("\n");

    printf("str2 = %s\n", str2);    
    printf(str3);          .
    printf("\nstr4 = %s\n", str4);  

    strcpy(str1, "XYZ");   

    return 0;
}
*/
// 출력 결과 
/*
str1 = Abc
str2 = very long 儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆abc
abc
str4 =

*/




#include <stdio.h>
#include <string.h>         
int main(void) {
    char str[10] = "hello";    
    int len = 0;

    printf("str의 길이: %d\n", strlen(str));      
    printf("\"good bye\"의 길이: %d\n", strlen("good bye"));  

    printf("str = %s\n", str);
    len = strlen(str);
    if (len > 0)               
        str[len - 1] = '\0';    
    printf("str = %s\n", str);
    return 0;
}
// 출력 결과 작성
/*
str의 길이: 5
"good bye"의 길이: 8
str = hello
str = hell

*/

/*
[strlen() 함수]

- strlen("문자열") / strlen(문자열을가리키는주소)
- 해당 문자열의 길이를 반환함
- 길이 반환 시 문자열 끝에 있는 NULL은 포함하지 않음.
*/