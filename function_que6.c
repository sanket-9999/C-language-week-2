// function for convert calcius temprature to fahrenheit--->

#include<stdio.h>
float temprature(float celcius);

int main(){
    int x;
    printf("Enter celcius: \n");
    scanf("%d", &x);
    printf("celcius to fahrenheit temprature is %f \n",temprature(x));

    return 0;
}
float temprature(float celcius){
    float result = (float)(celcius * 9.5) + 32;
    return result;
}
