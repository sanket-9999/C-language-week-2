#include<stdio.h>

int main(){

    // find the address of variable a--->

    int a = 3;
    int *ptr;
    ptr = &a;
    printf("The value of variable a is %d \n", &a);
    printf("The address of variable a is %u \n", ptr);
    printf("The address of variable a is %u \n", *ptr);

    return 0;
}