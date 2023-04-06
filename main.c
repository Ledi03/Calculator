#include <stdio.h>
#include <math.h>

float addition(float num1, float num2) {
    float result = num1 + num2;
    printf("Result: %.2f\n", result);
    return result;
}

float subtraction(float num1, float num2) {
    float result = num1 - num2;
    printf("Result: %.2f\n", result);
    return result;
}

float multiplication(float num1, float num2) {
    float result = num1 * num2;
    printf("Result: %.2f\n", result);
    return result;
}

float division(float num1, float num2) {
    if (num2 == 0) {
        printf("Error: cannot divide by zero\n");
        return 0;
    } else {
        float result = num1 / num2;
        printf("Result: %.2f\n", result);
        return result;
    }
}

float squareRoot(float num1) {
    if (num1 < 0) {
        printf("Error: cannot find square root of a negative number\n");
        return 0;
    } else {
        float result = sqrt(num1);
        printf("Result: %.2f\n", result);
        return result;
    }
}

float power(float num1, float num2) {
    float result = pow(num1, num2);
    printf("Result: %.2f\n", result);
    return result;
}

int main() {
    int choice;
    float num1, num2, result;

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
            scanf("%f %f", &num1, &num2);
            result = addition(num1, num2);
            break;
        case 2:
            printf("Enter two numbers to subtract:\n");
            scanf("%f %f", &num1, &num2);
            result = subtraction(num1, num2);
            break;
        case 3:
            printf("Enter two numbers to multiply:\n");
            scanf("%f %f", &num1, &num2);
            result = multiplication(num1, num2);
            break;
        case 4:
            printf("Enter two numbers to divide:\n");
            scanf("%f %f", &num1, &num2);
            result = division(num1, num2);
            break;
        case 5:
            printf("Enter a number to find its square root:\n");
            scanf("%f", &num1);
            result = squareRoot(num1);
            break;
        case 6:
            printf("Enter a number and its power:\n");
            scanf("%f %f", &num1, &num2);
            result = power(num1, num2);
            break;
    }

    return 0;
}
