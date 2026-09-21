#include <stdio.h>
#include "wizzy.h"

int main(){
    int num1 = 50;
    int num2 = 2;

    int multiplication = multiply(num2, num1);                 int division = divide(num1, num2);

    printf("the multiplication of two numbers %d and %d is: %d\n", num2, num1, multiplication);
    printf("the division between two numbers %d and %d is: %d\n", num1, num2, division);
} 
