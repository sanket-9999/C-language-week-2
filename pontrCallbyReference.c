#include<stdio.h>
void swap(int *a, int *b);

int main(){
    int x = 10, y = 20;
    swap(&x, &y);
    printf("After swap value x is %d and y is %d \n",x, y);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
