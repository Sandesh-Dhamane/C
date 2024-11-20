// swap numbers

#include <stdio.h>

int num1=10;
int num2=20;
int temp;
int main(){
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After Swapping num1:%d\n",num1);
    printf("After Swapping num2:%d\n",num2);
}