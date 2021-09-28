#include<stdio.h>

int main() {
    int num1;
    printf("점수를 입력하세요: ");
    scanf("%d", &num1);

    if (num1<100 && num1 >=90)
    {
        printf("A");
    } else if (num1 <= 89 && num1 >=80)
    {
        printf("B");
    } else
    {
        printf("F");
    }
        
}