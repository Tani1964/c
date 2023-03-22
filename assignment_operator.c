#include <stdio.h>

int main(){
    float num;
    printf("Input a number: ");
    scanf("%f",&num);

    num *= 5;
    printf("Your number * 5 = %.2f \n", num);

    num /= 3;
    printf("Your number / 3 = %.2f \n", num);

    return(0);

};
