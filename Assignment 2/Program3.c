// Check if the number is divisible by 7 and greater or less than 21

#include <stdio.h>

int main(){
    int num=14;
    if(num%7==0 && num>21) {
        printf("num is divisible by 7 and grater than 21");
    } else if (num%7==0 && num<21){
        printf("num is divisible by 7 and less than 21"); 
    }
}