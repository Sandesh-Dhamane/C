// Check if the number is divisible by 7 and 3

#include <stdio.h>

int main(){
    int num=21;
    if(num%3==0 && num%7==0) {
        printf("num is divisible by 3 and 7");
    } else{
        printf("num is not divisible by 3 and 7"); 
    }
}