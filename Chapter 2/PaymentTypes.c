#include <stdio.h> 

int main(){
    printf("Enter amount: ");
    int total = scanf("%d", &total); 

    int num20s = total / 20; 
    for (int i = 0; i < num20s; i++){
        total -= 20; 
    }

    int num10s = total / 10; 
    for (int j = 0; j < num10s; j++){
        total -= 10; 
    }

    int num5s = total / 5; 
    for (int k = 0; k < num5s; k++){
        total -= 5; 
    }

    int num1s = total / 1; 
    for (int t = 0; t < num1s; t++){
        total -= 1; 
    }

    printf("Number of $20: %d\n", num20s); 
    printf("Number of $10: %d\n", num10s);
    printf("Number of $5 : %d\n", num5s); 
    printf("Number of $1 : %d\n", num1s); 

    return 0; 
}
