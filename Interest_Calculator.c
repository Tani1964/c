#include <stdio.h>


//declare input variables
unsigned principal;
float rate;
float days;

//declare counter
int counter;
//declare output variables
float interest;

int main(){
    //initialize counter
    counter = 0;
    //collect inputs
    while (counter < 100){
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
        printf("aa %f \n", principal);
        if ( principal == -1 ){
            return 0;
        }
        printf("Enter interest rate: ");
        scanf("%f", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%f", &days);

        //calculate interest
        interest = (principal*rate*days)/365;

        // print output
        printf("%f \n", interest);

        counter ++;

   }

    return (0);

}
