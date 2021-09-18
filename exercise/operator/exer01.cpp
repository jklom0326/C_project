#include<stdio.h>

int main(){
    int x,y,z;

    printf("input x :");
    scanf("%d",&x);
    printf("input y :");
    scanf("%d",&y);
    printf("input z :");
    scanf("%d",&z);
    printf("(x + y) * (x + z )/(y % z) = %d",(x + y) * (x + z )/(y % z));
}