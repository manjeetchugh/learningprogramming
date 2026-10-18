#include <stdio.h>

int add()
{
    int a = 10, b = 20;
    return a + b;
}

int main()
{
    int sum = add();
    printf("Sum = %d", sum);
    return 0;
}
