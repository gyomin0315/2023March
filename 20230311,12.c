
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h>

struct content {
    char    title[40];
    int     price;
    double  rate;
};


int main(void) {
    struct content c1 = { "Avengers", 11000, 8.8 }; 
    struct content c2, c3;      

    strcpy(c2.title, "Aquaman");    
    c2.price = 5500;
    c2.rate = 7.1;

    strcpy(c3.title, "Shazam!");   
    c3.price = 7700;
    c3.rate = 7.4;

    printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate); 

    printf("c2 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate); 

    printf("c3 = %s, %d, %.1f\n", c3.title, c3.price, c3.rate); 
    return 0;
}
// 출력 결과 
/*
c1 = Avengers, 11000, 8.8
c2 = Aquaman, 5500, 7.1
c3 = Shazam!, 7700, 7.4

*/


#include <stdio.h>

#include <string.h>

struct content {
    char    title[40];
    int     price;
    double  rate;
};

int main(void) {
    struct content c1 = { "Avengers", 11000, 8.8 };
    struct content c2 = c1;    
    struct content c3 = { 0 };  

    c3 = c1;                   

    printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);

    printf("c2 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate);

    printf("c3 = %s, %d, %.1f\n", c3.title, c3.price, c3.rate);
    return 0;
}
// 출력 결과 
/*
c1 = Avengers, 11000, 8.8
c2 = Avengers, 11000, 8.8
c3 = Avengers, 11000, 8.8

*/


#include <stdio.h>

#include <string.h>

struct content {
    char    title[40];
    int     price;
    double  rate;
};


int main(void) {
    struct content c1 = { "Avengers", 11000, 8.8 };
    struct content c2 = c1;       

  
    if (strcmp(c1.title, c2.title) == 0 && c1.price == c2.price && c1.rate == c2.rate)
    { 

        printf("c1과 c2의 값이 같습니다.\n");

    }
    else
    {

        printf("c1과 c2의 값이 다릅니다.\n");
    }
    return 0;
}
// 출력 결과 
/*
c1과 c2의 값이 같습니다.

*/


#include <stdio.h>

#include <string.h>

struct content {
    char    title[40];
    int     price;
    double  rate;
};


int main(void) {
    struct content arr[] = {        
        {"Avengers", 11000, 8.8},    
        {"Aquaman", 5500, 7.1},      
        {"Shazam!", 7700, 7.4}      
    };

    int size = sizeof(arr) / sizeof(arr[0]); 

    int i;

    for (i = 0; i < size; i++)     
    { 

        printf("arr[%d] = %s, %d, %.1f\n", i, arr[i].title, arr[i].price, arr[i].rate);

    }
    return 0;
}
// 출력 결과 
/*
arr[0] = Avengers, 11000, 8.8
arr[1] = Aquaman, 5500, 7.1
arr[2] = Shazam!, 7700, 7.4

*/

#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
struct content {
    char    title[40];
    int     price;
    double  rate;
};
int main(void) {
    struct content c1 = { "Avengers", 11000, 8.8 };
    struct content* p = &c1;   

    p->price *= 0.8;               
    p->rate = 8.9;                 
    strcat(p->title, ": Endgame");  

    printf("%s, %d, %.1f\n", p->title, p->price, p->rate);
    printf("%s, %d, %.1f\n", (*p).title, (*p).price, (*p).rate);
    
    // 위 두 문장 같은 문장임 ! 

    return 0;
}

// 출력 결과 
/*
Avengers: Endgame, 8800, 8.9
Avengers: Endgame, 8800, 8.9

*/

#include <stdio.h>

struct MAN {
    char name[20];
    char morw;
    int age;
};

void func1(struct MAN std);
void func2(struct MAN* p);

int main(void) {

    struct MAN student = { "Kim", 'W', 20 };

    func1(student);

    func2(&student);

    return 0;
} 

void func1(struct MAN std) {
    printf("1: %s %c %d\n", std.name, std.morw, std.age);
}

void func2(struct MAN* p) {
    printf("2: %s %c %d\n", p->name, p->morw, p->age); 
}
// 출력 결과 
/*
1: Kim W 20
2: Kim W 20

*/
