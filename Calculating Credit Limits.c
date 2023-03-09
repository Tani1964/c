#include <stdio.h>

int main(){
//declare variables
float account_number;
float credit_limit;
float current_balance;

//collect inputs
    printf("Input customer's account number: ");
    scanf("%f", &account_number);

    printf("Input customer's credit limit before the recession: ");
    scanf("%f", &credit_limit);

//calculate current balance
    current_balance = credit_limit/2;

//print current balance
    printf("The customer's current balance: %.2f", current_balance);

    return(0);
};
