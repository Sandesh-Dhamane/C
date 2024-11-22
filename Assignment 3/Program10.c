#include <stdio.h>

int main() {
    int temperature;

    printf("Enter the current temperature: ");
    scanf("%d", &temperature);

    if (temperature >= 30) {
        printf("It's hot\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("weather is moderate\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("weather is cool\n");
    } else {
        printf("ice\n");
    }

}
