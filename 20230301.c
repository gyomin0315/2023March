/*
#include <stdio.h>
int main(void) {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* p = &arr[0];               
    int i;

    for (i = 0; i < 5; i++, p++) {   
        printf("p= %p, ", p);        
        printf("*p = %d\n", *p);   
    }

    return 0;
}
*/
// 출력 결과
/*
p= 00000065EB13F758, *p = 1
p= 00000065EB13F75C, *p = 2
p= 00000065EB13F760, *p = 3
p= 00000065EB13F764, *p = 4
p= 00000065EB13F768, *p = 5

*/

// p는 주소기 때문에, p++을 하게 되면, 3000번지에서 3004번지로, 3008번지... 이렇게 가게됨. 3000 -> 3001 -> 3002.. 이렇게 가는거 아님!
// 만약 int가 아니라 short형이였다면 3000 -> 3002 -> 3004... 로 올라감.

/*

#include <stdio.h>
int main(void) {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* p = arr;  
    int i;

    for (i = 0; i < 5; i++)
        printf("p[%d] = %d\n", i, p[i]);  

    return 0;
}
*/
// 출력 결과 
/*
p[0] = 1
p[1] = 2
p[2] = 3
p[3] = 4
p[4] = 5

*/


#include <stdio.h>

void swap(int* px, int* py);

int main(void) {
    int a = 1, b = 2;

    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);               

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
void swap(int* px, int* py) {    
    int temp = *px; 
    *px = *py;      
    *py = temp;    
}
// 출력 결과
/*
a = 1, b = 2
a = 2, b = 1
*/

