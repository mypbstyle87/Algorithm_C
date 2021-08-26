//
// Created by mypbs on 2021-08-26.
//

//첫 줄에 합
//        둘째 줄에 차,
//        셋째 줄에 곱,
//        넷째 줄에 몫,
//        다섯째 줄에 나머지,
//        여섯째 줄에 나눈 값을 순서대로 출력한다.
//(실수, 소수점 이하 셋째 자리에서 반올림해 둘째 자리까지 출력)

#include "stdio.h"

int main()
{
    long int num1, num2;
    float temp;
    scanf("%ld %ld", &num1, &num2);
    printf("%ld\n", num1+num2);
    printf("%ld\n", num1-num2);
    printf("%ld\n", num1*num2);
    printf("%ld\n", num1/num2);
    printf("%ld\n", num1%num2);
    printf("%.2f",(float) num1/num2);
    return 0;
}