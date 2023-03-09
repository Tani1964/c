#include <stdio.h>


int main(){
    //declare variables
        float sales;
        float rate;
        float salary;
        float extra;
        int counter;

    //initialize counter
    counter = 0;

    //while counter < 100
    while (counter < 100){
    //collect input
        printf("Enter sales in dollars (-1 to end):");
        scanf("%f", &sales);
    //if hours = -1 end program
        if (sales == -1){
            return (0);
        }

    //calculate pay for first 40 hours
        salary = (sales * 0.09) + 200;

    //PRINT result
        printf("Salary is $%.2f\n",salary + extra);
    };

//END
    return(0);
};
