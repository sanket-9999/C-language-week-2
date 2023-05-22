#include <stdio.h>

int main()
{
    
    int i = 34;
    int *j = &i; //j will now store the address of i
    printf("The value of i is %d \n", i);
    printf("The value of i is %d \n", *j);
    printf("The address value of i is %u \n", &i);
    printf("The address value of i is %u \n", j);
    printf("The address value of j is %u \n", &j);
    printf("The value of j is %u \n", *(&j));
    
    
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("The value of x is: %d \n", x);   //0
    printf("The value of *ptr is: %d \n", *ptr);   // 0

    *ptr += 5;
    printf("The value of x is: %d \n", x);   // 5
    printf("The value of *ptr is: %d \n", *ptr);   // 5

    // pointer to a pointer
    /*
    float price = 100.00; // 100
    float *ptr = &price; // 100
    float **ptr = &ptr; // 100
    */


    return 0;
}