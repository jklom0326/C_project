#include <stdio.h>

int main(){
    int sum = 0;
    // 반복문 처리를 안했을 때
    // sum = sum+1;
    // sum = sum+2;
    // sum = sum+3;
    // sum = sum+4;
    // sum = sum+5;

    // 반복문을 사용했을 때
    for (int i = 0; i <= 100; i++)
    {
        sum = sum + i;
    }
    
    printf("sum is %d\n", sum);
}