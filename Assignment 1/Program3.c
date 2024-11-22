// Write output x=19

#include <stdio.h>

int x = 19;
int main(){
    int a = x++ + --x - x++;
    // printf("%d",x);
    printf("%d\n",a);

    int b = --x + x-- - x++ + ++x;
    printf("%d\n",b);
}