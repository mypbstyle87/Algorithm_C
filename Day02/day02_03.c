//
// Created by mypbs on 2021-08-27.
//
//A : best!!!
//B : good!!
//C : run!
//D : slowly~
//        나머지 문자들 : what?

#include <stdio.h>

int main() {
    char c, d ;
    scanf("%c %c", &c, &d);
    printf("%d",d+5);
    switch (c) {
        case 'A':
            printf("best!!!");
            break;
        case 'B':
            printf("good!!");
            break;
        case 'C':
            printf("run!");
            break;
        case 'D':
            printf("slowly~");
            break;
        default:
            printf("what?");
    }
    return 0;
}