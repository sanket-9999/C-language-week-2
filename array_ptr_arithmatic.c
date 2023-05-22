#include<stdio.h>

int main(){
    
    int i = 34;
    int *ptr = &i;
   
    printf("The value of ptr is: %u \n", ptr);
    ptr++;
    // ptr = ptr + 1;
    printf("The value of ptr is: %u \n", ptr);

    char a = 'x';
    char *b = &a;    
    printf("The value of b is: %u \n", b);
    b++;
    // b = b + 1;
    printf("The value of b is: %u \n", b);

    return 0;
}