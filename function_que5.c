// average function--->

#include<stdio.h>
float average(int a, int b, int c);

int main(){
    int a = 3, b = 3, c = 3;
    printf("The average of a, b, c is %f \n",average(a,b,c));

    return 0;
}

float average(int a, int b, int c){
    float result = (float)(a + b + c) / 3;
    return result;
}