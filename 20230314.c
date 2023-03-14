// union.c
/*
#include <stdio.h>

union test {
    int     i;                          
    char    c;
    short   s;
};

int main(void) {

    union test t1 = { 0x12345678 }; //16���� 12345678 test�� �־���.

    printf("t1.i�� �ּ� = %p\n", &t1.i);   

    printf("t1.c�� �ּ� = %p\n", &t1.c);

    printf("t1.s�� �ּ� = %p\n", &t1.s);

    printf("sizeof(union test) = %d\n", sizeof(union test));    

    printf("t1.i = %x\n", t1.i);       

    printf("t1.c = %x\n", t1.c);      

    printf("t1.s = %x\n", t1.s);       

    return 0;
}
*/
// ��� ��� 
/*
t1.i�� �ּ� = 000000730536F904
t1.c�� �ּ� = 000000730536F904
t1.s�� �ּ� = 000000730536F904
sizeof(union test) = 4
t1.i = 12345678
t1.c = 78
t1.s = 5678

*/


#include <stdio.h>

typedef struct point {  

    int x, y;

} point_t; // �� struct�� point_t��� �̸����� �θ��ڴ�.

void print_point(const point_t* ptr);  

int main(void) {

    point_t pt1 = { 10, 20 };  

    print_point(&pt1);

    return 0;
}


void print_point(const point_t* ptr) {

    printf("(%d, %d) ", ptr->x, ptr->y);

}

// ��� ��� �ۼ�
/*
(10, 20)
*/
