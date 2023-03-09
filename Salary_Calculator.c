#include <stdio.h>


int main(){
    //declare variables
        float hours;
        float rate;
        float salary;
        float extra;
        int counter;

    //initialize counter
    counter = 0;

    //while counter < 100
    while (counter < 100){
    //collect input
        printf("Enter # of hours worked (-1 to end):");
        scanf("%f", &hours);
    //if hours = -1 end program
        if (hours == -1){
            return (0);
        }

        printf("Enter hourly rate of the worker ($00.00):");
        scanf("%f", &rate);

    //calculate pay for first 40 hours
        salary = hours * rate;

    //IF hours > 40 pay with 1.5*rate
        if (salary > 40){
        extra = (hours - 40) * (0.5 * rate);
        };

    //PRINT result
        printf("Salary is $%.2f\n",salary + extra);
    };

//END
    return(0);
};
