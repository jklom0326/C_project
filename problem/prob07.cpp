#include<stdio.h>

int main(){
    int num =0, i, result = 0;

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d", &num);

    for (i = 1; i < 10; i++)
    {
        result = num*i;
        printf("%d * %d = %d �Դϴ�.\n" ,num , i , result);
    }
    
}