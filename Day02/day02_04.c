//
// Created by mypbs on 2021-08-27.
//

//      월 : 계절 이름
//12, 1, 2 : winter
//3, 4, 5 : spring
//6, 7, 8 : summer
//9, 10, 11 : fall

//        참고
//swtich( ).. case ... break; 제어문에서
//break;를 제거하면 멈추지 않고 다음 명령이 실행되는 특성을 이용할 수 있다.

#include "stdio.h"

int main() {
    int a;
    scanf("%d", &a);

    switch (a) {
        case 12:
        case 1:
        case 2:
            printf("winter");
            break;
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("fall");
            break;
    }
    return 0;
}
