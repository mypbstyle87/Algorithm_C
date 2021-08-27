//
// Created by mypbs on 2021-08-27.
//

#include <stdio.h>

int main() {
    int num1, num2, num3, *temp;
    scanf("%d %d %d", &num1, &num2, &num3);
    int arr[3] = {num1, num2, num3};
    temp = arr;
    for (int i = 0; i < 3; i++) {
        if (*temp % 2 == 0) {
            printf("%d\n", *temp);
        }
        temp++;
    }
    return 0;
}
