#include <stdio.h>

double divide(double x, double y);
double input(void);
void output(double x);
void informaiton(void);

int main(void){

    double num1, num2 ,result;

    informaiton();
    printf("ù ��° �Ǽ� �Է�: ");
    num1 = input();

    printf("�� ��° �Ǽ� �Է�: ");
    num2 = input();

    result = divide(num1, num2);
    output(result);

    return 0;
}

double divide(double x, double y){
    double val;
    val = x/y;

    return val;
}

double input(void){
    double val;
    scanf("%lf", &val);

    return val;
}

void output(double x){
    printf("������ ���: %lf \n", x );
    return;
}

void informaiton(void){

    printf("--- ���α׷� ���� --- \n");
    return;
}