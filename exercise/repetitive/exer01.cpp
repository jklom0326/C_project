#include<stdio.h>

int main() {
    int num1, num2;
    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("큰수는 %d입니다.",num1);
    } else if (num1 == num2)
    {
        printf("두 수는 같습니다.");
    } else if (num1 < num2)
    {
        printf("큰수는 %d입니다.",num2);
    }
        
}