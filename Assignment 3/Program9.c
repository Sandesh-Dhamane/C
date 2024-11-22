// Pythagorean triplet

#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        x = a;
        y = b;
        z = c;
    } else if (b > a && b > c) {
        x = b;
        y = a;
        z = c;
    } else {
        x = c;
        y = a;
        z = b;
    }

    if (x * x == y * y + z * z) {
        printf("The numbers %d, %d, and %d  a Pythagorean triplet.\n", a, b, c);
    } else {
        printf("The numbers %d, %d, and %d not a Pythagorean triplet.\n", a, b, c);
    }
}
