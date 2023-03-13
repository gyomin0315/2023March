
#include <stdio.h>

enum direction { north, south, east, west };  // ����ü�� ���� ��� ����

int main(void) {
    enum direction moves[] = {      // ����ü �迭 
        north, north, east, south, south, west,
    };


    int size = sizeof(moves) / sizeof(moves[0]); // ������ ���� ���

    int i;

    printf("�̵� ����: ");

    for (i = 0; i < size; i++) {
        switch (moves[i]) { 

        case north:                 // ���� ����� case���� ����� �� �ִ�. // case������ ������ char���� ���°ɷ� �˰� �־���. ���⼭ north, south, east, west�� ������ ! enum���� ������ �ٲ�����.
            printf("�� ");
            break;

        case south:
            printf("�� ");
            break;

        case east:
            printf("�� ");
            break;

        case west:
            printf("�� ");
            break;
        }
    }

    printf("\n");

    return 0;
}
// ��� ��� 
/*
�̵� ����: �� �� �� �� �� ��

*/

// enum ���� �״�� ���


#include <stdio.h>

enum direction { north, south, east, west };  

enum direction1 { north1, south1 = 0, east1, west1 }; 


enum direction2 { north2, south2, east2 = 99, west2 }; 

enum direction3 { north3 = -4, south3, east3 = -100, west3 };  


int main(void) {

    printf("%d %d %d %d \n", north, south, east, west);

    printf("%d %d %d %d \n", north1, south1, east1, west1);

    printf("%d %d %d %d \n", north2, south2, east2, west2);

    printf("%d %d %d %d \n", north3, south3, east3, west3);

    return 0;
}
// ��� ��� 
/*
0 1 2 3
0 0 1 2
0 1 99 100
-4 -3 -100 -99

*/

// ����ü���� ù ��ŸƮ�� �ʱ�ȭ������ �ʴ� �̻� 0���� ������. 0���� �����ؼ� �ϳ��� �ö�. �߰��� �ʱ�ȭ�� �������� �ʱ�ȭ�� ������ ������. �� �ķ� �ʱ�ȭ������ �ϳ��� ����.