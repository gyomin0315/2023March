/*
#include <stdio.h>

void get_sum_product(int x, int y, int* psum, int* pproduct); 

int main(void) {
    int sum, product;

    get_sum_product(123, 456, &sum, &product);

    printf("sum = %d, product = %d\n", sum, product);

    return 0;
}
void get_sum_product(int x, int y, int* psum, int* pproduct) {


    *psum = x + y;

    *pproduct = x * y;
}
*/
// 출력 결과 
/*
sum = 579, product = 56088

*/


#include <stdio.h>
#define SIZE 10

void copy_array(const int* source, int* target, int size);
void print_array(const int* arr, int size);

int main(void) {
    int x[SIZE] = { 10, 20, 30, 40, 50 };
    int y[SIZE] = { 0 };

    printf("x = ");
    print_array(x, SIZE);   

    copy_array(x, y, SIZE);

    printf("y = ");

    print_array(y, SIZE);

    return 0;
}

void copy_array(const int* source, int* target, int size) {
    int i;

    for (i = 0; i < size; i++)
        target[i] = source[i];  
}
void print_array(const int* arr, int size) { 
    int  i;

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);  

        printf("\n");
}

// 출력 결과 
/*
x = 10 20 30 40 50 0 0 0 0 0
y = 10 20 30 40 50 0 0 0 0 0

*/