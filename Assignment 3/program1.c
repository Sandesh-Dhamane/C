// Check given number is in the 1-1000

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 1000) {
        printf("%d is in the range 1 to 1000.\n", num);
    } else {
        printf("%d is not in the range 1 to 1000.\n", num);
    }
}
