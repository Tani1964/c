#include <stdio.h>

float account_number;
float mortgage_amount;
float mortgage_term;
float interest_rate;
float total_interest;
float total_amount;
int interest;
//declare counter
int counter;


int main(){
    //initialize counter
    counter = 0;
    //collect inputs
    while (counter < 100){
        printf("Enter account number (-1 to end): ");
        scanf("%f", &account_number);
        printf("%f \n", account_number);
        if ( account_number == -1 ){
            return 0;
        }
        printf("Enter mortgage amount (in dollars): ");
        scanf("%f", &mortgage_amount);
        printf("Enter mortgage term (in years): ");
        scanf("%f", &mortgage_term);
        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &interest_rate);

        total_interest = (mortgage_amount*interest_rate*mortgage_term);
        total_amount = total_interest + mortgage_amount;
        interest = total_amount/(mortgage_term*12);
        //calculate interest and print output
        printf("The monthly payable interest $%d\n", interest);

        counter ++;

   }

    return (0);
};

main();
