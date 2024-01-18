#include <stdio.h> 

int main(){
    float taxAmount, original, withTax; 

    printf("Enter tax percent: "); 
    scanf("%f", &taxAmount); 
    taxAmount /= 100.0f; 

    printf("Enter original price: "); 
    scanf("%f", &original); 

    withTax = original + (taxAmount * original); 
    printf("Original Cost: $%.2f\n", original); 
    printf("Tax: $%.2f\n", taxAmount); 
    printf("Cost after tax: $%.2f\n", withTax); 

    return 0; 
}
