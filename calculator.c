#include <stdio.h>


double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2lf", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2lf", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2lf", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero");
            } else {
                result = divide(num1, num2);
                printf("Result: %.2lf", result);
            }
            break;
        default:
            printf("Error: Invalid operator");
            break;
    }

    return 0;
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}
