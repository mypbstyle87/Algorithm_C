//
// Created by mypbs on 2021-08-27.
//

#include "stdio.h"

int main(){
    int num;
    scanf("%d", num);
    if(num<40){
        printf("D");
    }
    else if(num<70){
        printf("C");
    }
    else if(num<90){
        printf("B");
    }
    else{
        printf("A");
    }
    return 0;
}