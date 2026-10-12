#include <stdio.h>

int main() {
    int num, og_num, rem;
    int n = 0;
    int sum = 0;

    printf("Amstrong Number Program \n");
    printf("Enter a number: ");
    scanf("%d", &num);

    og_num = num;
    while (og_num != 0) {
        og_num = og_num / 10;
        n++;
    }

    og_num = num;
    while (og_num != 0) {
        rem = og_num % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power = power * rem;
        }
        sum = sum + power;
        og_num = og_num / 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong Number.\n", num);
    } else {
        printf("%d is not an Armstrong Number.\n", num);
    }

    return 0;
}
