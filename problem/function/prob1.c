#include<stdio.h>

int sum();

int main(void){
   int answer = sum(4, 6);
   printf("%d",answer);
}

int sum(int x, int y){
    int result;
    result = x + y ;

    return result;
}