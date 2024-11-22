#include <stdio.h>

int main(){
    int percentage;
    scanf("%d",&percentage);
    if(percentage>85 && percentage<100) {
        printf("Medical\n");
    } else if (percentage<=85 && percentage>75){
        printf("Engineering\n");
    } else if (percentage<=75 && percentage>=65){
        printf("Pharmacy or any bachlor\n");
    }
}