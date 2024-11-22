#include <stdio.h>

int main() {
    int marks;

    printf("Enter a Marks : ");
    scanf("%d", &marks);

    if(marks>=75) {
        printf("Passed first class with distinction\n");
    } else if (marks>=60){
        printf("Passed with first class\n");
    } else if (marks>50){
        printf("Passed with second class\n");
    } else if (marks>40){
        printf("Passed\n");
    } else {
        printf("Fail");
    }
}