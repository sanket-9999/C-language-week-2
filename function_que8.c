#include<stdio.h>
int perCalculator(int science, int maths, int physics);

int main(){
    int a, b, c;
    printf("Enter science marks: \n");
    scanf("%d",&a);
    printf("Enter maths marks: \n");
    scanf("%d",&b);
    printf("Enter physics marks: \n");
    scanf("%d",&c);
    printf("Your percantage is: %d", perCalculator(a, b, c));
    
    return 0;
}

int perCalculator(int science, int maths, int physics){
    int result;
    return result = ((science + maths + physics) / 3);
}
