#include<stdio.h>

int main() {
    int num1, num2;
    printf("�ΰ��� ������ �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("ū���� %d�Դϴ�.",num1);
    } else if (num1 == num2)
    {
        printf("�� ���� �����ϴ�.");
    } else if (num1 < num2)
    {
        printf("ū���� %d�Դϴ�.",num2);
    }
        
}