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
// ��� ��� 
/*
str1 = Abc
str2 = very long ����������������������������������abc
abc
str4 =

*/




#include <stdio.h>
#include <string.h>         
int main(void) {
    char str[10] = "hello";    
    int len = 0;

    printf("str�� ����: %d\n", strlen(str));      
    printf("\"good bye\"�� ����: %d\n", strlen("good bye"));  

    printf("str = %s\n", str);
    len = strlen(str);
    if (len > 0)               
        str[len - 1] = '\0';    
    printf("str = %s\n", str);
    return 0;
}
// ��� ��� �ۼ�
/*
str�� ����: 5
"good bye"�� ����: 8
str = hello
str = hell

*/

/*
[strlen() �Լ�]

- strlen("���ڿ�") / strlen(���ڿ�������Ű���ּ�)
- �ش� ���ڿ��� ���̸� ��ȯ��
- ���� ��ȯ �� ���ڿ� ���� �ִ� NULL�� �������� ����.
*/