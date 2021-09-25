#include<stdio.h>

int main(){
    int num =0, i, result = 0;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    for (i = 1; i < 10; i++)
    {
        result = num*i;
        printf("%d * %d = %d 입니다.\n" ,num , i , result);
    }
    
}