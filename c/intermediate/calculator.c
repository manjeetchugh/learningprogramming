#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return a / b; }

int main(void)
{
    int a, b;
    char op;

    printf("Calculator Program\n");

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    printf("Operation (A)Add, (S)Subtract, (M)Multiply, (D)Divide: ");
    scanf(" %c", &op);

    switch (op) {
        case 'A':
        case 'a':
            printf("Result: %d\n", add(a, b));
            break;

        case 'S':
        case 's':
            printf("Result: %d\n", subtract(a, b));
            break;

        case 'M':
        case 'm':
            printf("Result: %d\n", multiply(a, b));
            break;

        case 'D':
        case 'd':
            if (b == 0) {
                printf("Invalid Division:Cannot divide by zero.\n");
            } else {
                printf("Result: %.2f\n", (double)a / b);
            }
            break;

        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
