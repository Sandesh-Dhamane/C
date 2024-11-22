// leap year

#include <stdio.h>

int main(){
    int num1;
    scanf("%d", &num1);
    if((num1%4==0 && num1%100!=0)||(num1%400==0)) {
        printf("%d is leap year\n",num1);
    } else {
        printf("%d is not leap year",num1);
    }
}