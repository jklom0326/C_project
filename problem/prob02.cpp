#include <stdio.h>
#include <math.h>

#define MAX 360 /* macro definition */
#define MIN 0
#define STEP 10

int main(){
    double pi = 4.0 * atan(1.0);

    for (int degree = 0; degree <= MAX; degree += STEP){
        double radian = pi * (degree / 180.0); 
        double v = sin(radian);
        printf("sin(%d) =  %f\n",degree ,v);
    }
    
}