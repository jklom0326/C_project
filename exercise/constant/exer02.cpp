#include <stdio.h>

#define MY_AGE 20
#define BRO_AGE 18
#define THIS_YEAR 2010
#define MY_BIRTH 1990
#define BRO_BIRTH 1992

int main(){
    printf("올해는 %d년입니다.\n",THIS_YEAR);
    printf("내 나이는 %d살입니다.\n",MY_AGE);
    printf("나는 %d년에 태어나 %d번째 해가 되었습니다.\n", MY_BIRTH, MY_AGE);
    printf("내 동생의 나이는 %d살입니다.\n",BRO_AGE);
    printf("내동생은 %d년에 태어나 %d번째 해가 되었습니다.\n",BRO_BIRTH,BRO_AGE);
}