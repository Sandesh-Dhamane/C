// Check char is uppercase or lowercase

#include <stdio.h>

int main(){
    char ch='B';
    if(ch >= 'A' && ch <= 'Z') {
        printf("uppercase");
    } else{
        printf("lowercase"); 
    }
}