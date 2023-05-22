#include<stdio.h>
void maxNum(int *a, int *b);

int main(){
    int x;
    int y;

    int *ptr = &x;
    int *ptr_2 = &y;

    printf("Enter First Number: \n");
    scanf("%d", &(*ptr));

    printf("Enter Second Number: \n");
    scanf("%d", &(*ptr_2));

    maxNum(&x, &y);
    printf("\n",x , y);

    return 0;
}

void maxNum(int *a, int *b){
    if(*a > *b){
        printf("%d is Grater \n", *a);
    }
    else{
        printf("%d is Grater \n", *b);
    }
}