// Check which number is maximum

#include <stdio.h>

int main(){
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d",&num2);
    if(num1<num2) {
        printf("%d is maximum in %d and %d",num2,num1,num2);
    } else {
        printf("%d is maximum in %d and %d",num1,num1,num2); 
    }
}