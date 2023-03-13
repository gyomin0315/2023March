
#include <stdio.h>

enum direction { north, south, east, west };  // 열거체와 열거 상수 정의

int main(void) {
    enum direction moves[] = {      // 열거체 배열 
        north, north, east, south, south, west,
    };


    int size = sizeof(moves) / sizeof(moves[0]); // 사이즈 쉽게 얻기

    int i;

    printf("이동 순서: ");

    for (i = 0; i < size; i++) {
        switch (moves[i]) { 

        case north:                 // 열거 상수는 case문에 사용할 수 있다. // case문에는 정수나 char형만 들어가는걸로 알고 있었음. 여기서 north, south, east, west는 정수임 ! enum에서 정수로 바꿔줬음.
            printf("북 ");
            break;

        case south:
            printf("남 ");
            break;

        case east:
            printf("동 ");
            break;

        case west:
            printf("서 ");
            break;
        }
    }

    printf("\n");

    return 0;
}
// 출력 결과 
/*
이동 순서: 북 북 동 남 남 서

*/

// enum 정수 그대로 출력


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
// 출력 결과 
/*
0 1 2 3
0 0 1 2
0 1 99 100
-4 -3 -100 -99

*/

// 열거체에서 첫 스타트는 초기화해주지 않는 이상 0부터 시작임. 0부터 시작해서 하나씩 올라감. 중간에 초기화를 해줬으면 초기화된 값으로 지정됨. 그 후로 초기화값부터 하나씩 증가.