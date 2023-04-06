//llamce22
#include <stdio.h>

float calculate_area(float length) {
    return length * length;
}

float calculate_perimeter(float length) {
    return 4 * length;
}

int main() {
    float length, area, perimeter;

    printf("Enter the length of the square: ");
    scanf("%f", &length);

    area = calculate_area(length);
    perimeter = calculate_perimeter(length);

    printf("Area of the square is: %.2f\n", area);
    printf("Perimeter of the square is: %.2f\n", perimeter);

    return 0;
}
