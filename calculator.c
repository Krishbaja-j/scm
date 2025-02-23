#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    char operation;

    printf("Enter X: ");
    scanf("%d", &x);

    printf("Enter Y: ");
    scanf("%d", &y);

    while ((getchar()) != '\n');

    printf("Enter operation (+, -, *, /): ");
    scanf("%c", &operation);

    if (operation == '+') {
        printf(" %d\n", x + y);
    } else if (operation == '-') {
        printf(" %d\n", x - y);
    } else if (operation == '*') {
        printf(" %d\n", x * y);
    } else if (operation == '/') {
        if (y != 0)
            printf("%f\n", (float)x / y);
        else
            printf("Error! Division by zero.\n");
    } 

    return 0;
}
