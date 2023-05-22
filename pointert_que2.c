#include<stdio.h>
void change(int *a);
int main(){
    int x = 10;
    int *a=&x;
 
    printf("The value of x is %d \n", x);

    change(a);
    printf("The value of x is %d \n", *a);

    return 0;
}
void change(int *a){
    (*a)*=10;
}
