#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int count = 0;
    for (int i = 2; i <= 10; i++) {
        if (number % i == 0) {
            count++;
        }
    }
    printf("%d has divisors between 2 and 10 : %d\n", number, count);

    return 0;
}
