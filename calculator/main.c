#include <stdio.h>
#include "Calculator.h"

int main()
{
    char operator;
    double num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
