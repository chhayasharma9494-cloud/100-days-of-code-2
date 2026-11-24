#include <stdio.h>
int main(){
    
    int num1, num2;
    printf("enter the first number:");
    scanf("%d", &num1);
    
    printf("enter the second number:");
    scanf("%d", &num2);
    
    printf("sum = %d\n", num1 + num2);
    printf("difference = %d\n", num1 - num2);
    printf("product = %d\n", num1 * num2);
    printf("quotient = %d\n", num1 / num2);
    return 0;
}