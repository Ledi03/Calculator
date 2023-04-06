//llamce22
#include <stdio.h>

double calculate_area(double length) {
    return length * length;
}

double calculate_perimeter(double length) {
    return 4 * length;
}

int main() {
    double length, area, perimeter;

    printf("Enter the length of the square: ");
    scanf("%lf", &length);

    area = calculate_area(length);
    perimeter = calculate_perimeter(length);

    printf("Area of the square is: %.2lf\n", area);
    printf("Perimeter of the square is: %.2lf\n", perimeter);

    return 0;
}
