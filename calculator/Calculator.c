#include "Calculator.h"
#include <stdio.h>

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if (num2 == 0)
	{
        printf("Error! Division by zero.\n");
        return 0;
    }
    return num1 / num2;
}
