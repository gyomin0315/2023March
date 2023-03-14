// union.c
/*
#include <stdio.h>

union test {
    int     i;                          
    char    c;
    short   s;
};

int main(void) {

    union test t1 = { 0x12345678 }; //16진수 12345678 test에 넣었다.

    printf("t1.i의 주소 = %p\n", &t1.i);   

    printf("t1.c의 주소 = %p\n", &t1.c);

    printf("t1.s의 주소 = %p\n", &t1.s);

    printf("sizeof(union test) = %d\n", sizeof(union test));    

    printf("t1.i = %x\n", t1.i);       

    printf("t1.c = %x\n", t1.c);      

    printf("t1.s = %x\n", t1.s);       

    return 0;
}
*/
// 출력 결과 
/*
t1.i의 주소 = 000000730536F904
t1.c의 주소 = 000000730536F904
t1.s의 주소 = 000000730536F904
sizeof(union test) = 4
t1.i = 12345678
t1.c = 78
t1.s = 5678

*/


#include <stdio.h>

typedef struct point {  

    int x, y;

} point_t; // 이 struct를 point_t라는 이름으로 부르겠다.

void print_point(const point_t* ptr);  

int main(void) {

    point_t pt1 = { 10, 20 };  

    print_point(&pt1);

    return 0;
}


void print_point(const point_t* ptr) {

    printf("(%d, %d) ", ptr->x, ptr->y);

}

// 출력 결과 작성
/*
(10, 20)
*/
