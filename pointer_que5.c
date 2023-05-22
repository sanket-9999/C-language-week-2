// using call by value and verify that it does not change the value the said variable--->
#include<stdio.h>
int changevalue(int a);

int main(){
    int x = 5;
    changevalue(x);
    printf("The value of x is %d");
    return 0;
}

int changevalue(int a){
    return a * 10;
}