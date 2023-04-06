//llamce22
#include <stdio.h>
#include <math.h>

double addition(double num1, double num2) {
    double result = num1 + num2;
    printf("Result: %.2lf\n", result);
    return result;
}

double subtraction(double num1, double num2) {
    double result = num1 - num2;
    printf("Result: %.2lf\n", result);
    return result;
}

double multiplication(double num1, double num2) {
    double result = num1 * num2;
    printf("Result: %.2lf\n", result);
    return result;
}

double division(double num1, double num2) {
    if (num2 == 0) {
        printf("Error: cannot divide by zero\n");
        return 0;
    } else {
        double result = num1 / num2;
        printf("Result: %.2lf\n", result);
        return result;
    }
}

double squareRoot(double num1) {
    if (num1 < 0) {
        printf("Error: cannot find square root of a negative number\n");
        return 0;
    } else {
        double result = sqrt(num1);
        printf("Result: %.2lf\n", result);
        return result;
    }
}

double power(double num1, double num2) {
    double result = pow(num1, num2);
    printf("Result: %.2lf\n", result);
    return result;
}

int main() {
    int choice;
    double num1, num2, result;

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers to add:\n");
            scanf("%lf %lf", &num1, &num2);
            result = addition(num1, num2);
            break;
        case 2:
            printf("Enter two numbers to subtract:\n");
            scanf("%lf %lf", &num1, &num2);
            result = subtraction(num1, num2);
            break;
        case 3:
            printf("Enter two numbers to multiply:\n");
            scanf("%lf %lf", &num1, &num2);
            result = multiplication(num1, num2);
            break;
        case 4:
            printf("Enter two numbers to divide:\n");
            scanf("%lf %lf", &num1, &num2);
            result = division(num1, num2);
            break;
        case 5:
            printf("Enter a number to find its square root:\n");
            scanf("%lf", &num1);
            result = squareRoot(num1);
            break;
        case 6:
            printf("Enter a number and its power:\n");
            scanf("%lf %lf", &num1, &num2);
            result = power(num1, num2);
            break;
    }

    return 0;
}
