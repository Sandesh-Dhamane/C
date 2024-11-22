// Write program to check if num is less than 10 pritnt num is less than 10
// if num is greater than 10 but less than 20 print num is greater than 10 but less than 20
// if no match found print happy coding 

#include <stdio.h>

int main(){
    int num = 21;
    if(num<10) {
        printf("num is less than 10");
    } else if(num>10 && num<20) {
        printf("num is greater than 10 but less than 20");
    } else {
        printf("Happy coding");
    }
}