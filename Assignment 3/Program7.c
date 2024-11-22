// profit loss

#include <stdio.h>

int main(){
    int cost=700;
    int selling=500;
    if(cost<selling) {
        int profit = selling-cost;
        printf("profit of %d",profit);
    } else {
        int loss = cost-selling;
        printf("loss of %d",loss); 
    }
}