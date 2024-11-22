// numbers divisible by 2 and 5 between 1-100

#include <stdio.h>

int main() {
    int count = 0;
    
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0 && i%5==0) {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
