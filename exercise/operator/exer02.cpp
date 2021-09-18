#include<stdio.h>

int main(){
    int x,y;

    printf("input x :");
    scanf("%d",&x);
    printf("input y :");
    scanf("%d",&y);

    printf("Smaller Number: %d", (x > y) ? y:x);
}