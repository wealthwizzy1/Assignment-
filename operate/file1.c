#include <stdio.h>

int multiply(int num1, int num2); // function declaration
int divide(int num1, int num2); // function declaration

int main(){
    int value1 = 10;
    int value2 = 5;

    printf("the multiplication of two numbers %d and %d is: %d\n", value2, value1, multiply(value2, value1));
    printf("the division of two numbers %d and %d is: %d\n", value1, value2, divide(value1, value2));
    return 0;
}

int multiply(int num1, int num2){
    int multiplication = num2 * num1;
    return multiplication;
}

int divide(int num1, int num2){
    int division = num1 / num2;
    return division;
}
