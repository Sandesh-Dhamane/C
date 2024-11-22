// Check given number is divisible by 5 or 10

#include <stdio.h>

int main(){
    int num=20;
    if(num%5==0 || num%10==0) {
        printf("num is divisible");
    } else{
        printf("num is not divisible"); 
    }
}