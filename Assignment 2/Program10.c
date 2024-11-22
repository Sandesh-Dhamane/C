// Check triangle is valid or not

#include <stdio.h>

int main(){
    int num1=57;
    int num2=61;
    int num3=62;
    if(num1+num2+num3==180) {
        printf("triangle is valid");
    } else {
        printf("triangle is not valid"); 
    }
}