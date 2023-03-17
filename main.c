#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int gradingFunc(){
    int score;
    char grade[1];
    printf("Input your score:");
    scanf("%d", &score);
    if ( score >= 75 ) {
        strcpy(grade,"A");
    }
    else if ( score >= 60 ) {
        strcpy(grade,"B");
    }
    else if ( score >= 50 ) {
        strcpy(grade,"C");
    }
    else if ( score >= 45 ) {
        strcpy(grade,"D");
    }
    else if ( score >= 40 ) {
        strcpy(grade,"E");
    }
    else {
        strcpy(grade,"F");
    }
    printf("Your grade is %s", grade);
    return 0;
}
int averageCalc(){
    int count = 0;
    double total = 0;
    printf("To calculate the average of the test scores of ten students\n");
    while (count < 10) {
        int c_score;
        printf("%d - input score: ", count + 1);
        scanf("%d", &c_score);
        total = total + c_score;
        count = count + 1;
    }
    double average = total / count;
    printf("average is %f", average);
}
int sentinelAverageCalc() {
int count = 0;
float total = 0;
float average;
int c_score;
printf("To calculate the average of the test scores of ten students\n");
printf("%d - input score(-1 to end): ", count + 1);
scanf("%d", &c_score);
while (c_score != -1) {
    total = total + c_score;
    count = count + 1;
    printf("%d - input score(-1 to end): ", count + 1);
    scanf("%d", &c_score);
}

if(count != 0) {
    average = total / count;
    printf("average is %.2f", average);
}
else {
    printf("No scores were entered");
}
}
//  EXERCISE ONE (3.17)
int mortgageCalc() {
    printf("To calculate the interest accrued on a bank customer's mortgage.\n");
    // declaring variables
    int account_number;
    float mortage_amount;
    float mortage_term;
    float interest_rate;
    float total_amount_payable;
    int monthly_interest;
    // infinite loop while an input of -1 isn't recieved
    while (1)
    {
        // receiving inputs
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account_number);
        if (account_number == -1)
        {
            // sentinel control
            break;
        }
        printf("Enter mortgage amount (in dollars): ");
        scanf("%f", &mortage_amount);
        printf("Enter mortgage term (in years): ");
        scanf("%f", &mortage_term);
        if (mortage_term == 0.0)
        {
            printf("term can't be 0");
            break;
        }
        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &interest_rate);
        // processing data
        total_amount_payable = (mortage_amount * interest_rate * mortage_term) + mortage_amount;
        monthly_interest = total_amount_payable / (mortage_term * 12); // converted term in years to months
        // output
        printf("The monthly payable interest $ %d\n\n", monthly_interest);
    }
    return 0;
}
//  EXERCISE TWO (3.18)
int commissionCalc() {
    printf(" A program that will calculate and display each salesperson's earnings for the last week.\n");
    // declaring variables
    float sales;
    float salary;
    // infinite loop while an input of -1 isn't recieved
    while (1)
    {
        // receiving inputs
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        if (sales == -1)
        {
            // sentinel control
            break;
        }
        // processing data
        salary = 200 + (sales * 9/100);
        // output
        printf("Salary is $%.2f\n\n", salary);
    }
    return 0;
}
//  EXERCISE THREE (3.19)
int interestCalc() {
    printf("To calculate the simple interest for each loan inputted\n");
    // declaring variables
    float principal;
    float interest_rate;
    float loan_term;
    float interest_charge;
    // infinite loop while an input of -1 isn't recieved
    while (1)
    {
        // receiving inputs
        printf("Enter loan pricipal (-1 to end): ");
        scanf("%f", &principal);
        if (principal == -1)
        {
            // sentinel control
            break;
        }
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter term of the loan in days: ");
        scanf("%f", &loan_term);
        // processing data
        interest_charge = principal * interest_rate * loan_term / 365; // converted term in days to years
        // output
        printf("The interest charge is $ %.2f\n\n", interest_charge);
    }
    return 0;
}
//  EXERCISE FOUR (3.20)
int salaryCalc() {
    printf("A program that will determine the gross pay for each of several employees\n");
    // declaring variables
    int n_hours;
    float hourly_rate;
    float salary;
    // infinite loop while an input of -1 isn't recieved
    while (1)
    {
        // receiving inputs
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &n_hours);
        if (n_hours == -1)
        {
            // sentinel control
            break;
        }
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourly_rate);
        // processing data
        salary = n_hours * hourly_rate;
        // excess hours worked
        if (n_hours > 40) {
            salary += (n_hours - 40) * hourly_rate / 2;
        }
        // output
        printf("Salary is $ %.2f\n\n", salary);
    }
    return 0;
}
//  EXERCISE FIVE (4.17)
int creditLimitCalc() {
    char s[100] = "";
    for (int counter = 0; counter < 3; counter++) {
        char accNumber[100];
        float creditLimit;
        float balance;
        printf("Input customer's account number: ");
        scanf("%s", &accNumber);
        printf("Input customer's credit limit before recession: ");
        scanf("%f", &creditLimit);
        printf("Input customer's current balance: ");
        scanf("%f", &balance);
        printf("New credit limit is %.2f \n\n", creditLimit / 2);
        if (balance > creditLimit/2) {
            strcat(s, "-- ");
            strcat(s, accNumber);
            strcat(s, "\n");
        }
    }
    printf("Customer Account(s) having current balance exceeding their current limits:\n");
    printf("%s", s);
    return 0;
}
//  EXERCISE SIX (4.18)
int barChartProgram() {
    for (int counter= 0; counter < 5; counter++){
        int res=0;
        do {
            printf("Enter a digit: ");
            scanf("%d", &res);
            if (!(res > 0 && res <= 30)) {
                printf("please enter a digit between 1 to 30\n");
            }
        }
        while(!(res > 0 && res <= 30));
        while(res!=0){
            printf("*");
            --res;
        }
        printf("\n");
    }
}
//  EXERCISE SEVEN (4.19)
int salesCalc() {
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    int p_number=0;
    int quantity=0;
    while(1) {
        printf("Enter product number(-1 to end): ");
        scanf("%d", &p_number);
        if (p_number==-1) {
            break;
        }
        if (p_number > 5) {
            printf("Product Not Found!");
            continue;
        }
        printf("Enter Quantity sold: ");
        scanf("%d", &quantity);
        switch(p_number) {
        case 1:
            p1 = p1 + (2.98 * quantity);
            break;
        case 2:
            p2 = p2 + (4.5 * quantity);
            break;
        case 3:
            p3 = p3 + (9.98 * quantity);
            break;
        case 4:
            p4 = p4 + (4.49 * quantity);
            break;
        case 5:
            p5 = p5 + (6.87 * quantity);
            break;
        }
    }
    printf("Product Id\t\tTotal\n");
    printf("1\t\t\t$%.2f\n", p1);
    printf("2\t\t\t$%.2f\n", p2);
    printf("3\t\t\t$%.2f\n", p3);
    printf("4\t\t\t$%.2f\n", p4);
    printf("5\t\t\t$%.2f\n", p5);
    printf("Overall total is%.2f\n", p1+p2+p3+p4+p5);
}
//  EXERCISE EIGHT (5.10)
int roundingNumber1() {
    float num;
    while (1) {
        printf("Enter a number(-1 to end): ");
        scanf("%f", &num);
        if(num == -1) {
            break;
        }
        //printf("Rounded %.2f to %f", num, floor(ceil(2*num)/2));
        printf("Rounded %.1f to %.lf\n", num, ceil(num + .5)-1);
    }
}
//  EXERCISE NINE (5.11)
float roundToInteger(float);
float roundToInteger(float num) {
    return floor(num + .5);
}
float roundToTenths(float);
float roundToTenths(float num) {
    return floor(num * 10 + .5) / 10;
}
float roundToHundreths(float);
float roundToHundreths(float num) {
    return (floor(num * 100 + .5) / 100);
}
float roundToThousandths(float);
float roundToThousandths(float num) {
    return (floor(num * 1000 + .5) / 1000);
}
int roundingNumber2() {
    float res = 0.5;
    printf("Enter a number: ");
    scanf("%f", &res);
    printf("To Integer = %.f\n", roundToInteger(res));
    printf("To Tenths = %.1f\n", roundToTenths(res));    printf("To Hundreths = %.2f\n", roundToHundreths(res));    printf("To Thousandths = %.3f\n", roundToThousandths(res));
}
// EXERCISE TEN (5.14)
int generateRandNumber() {
    printf("%d\n", rand());
    printf("%d\n", (1 + (rand() % 10)) * 3);
    printf("%d\n", (2 * (rand() % 9)) + 3);
    printf("%d\n", (5 * (rand() % 7)) + 3);
}
// EXERCISE TEN (5.15)
double hypotenuse(double x, double y) {
    return pow(pow(x,2) + pow(y,2), 0.5);
}
int hypotenuseCalc() {
    double side1, side2;
    printf("Enter first side length: ");
    scanf("%lf", &side1);
    printf("Enter second side length: ");
    scanf("%lf", &side2);
    printf("\nHypotenuse is %.2f\n", hypotenuse(side1,  side2));
}
//  EXERCISE ELEVEN (5.16)
double checkMaximum(double a, double b, double c) {
    double max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
int checkTriangle(double a, double b, double c) {
    double max = checkMaximum(a, b, c);
    if (a + b + c - max <= max) {
        return 0;
    }
    return 1;
}
double findTriangleArea() {
    int i = 0;
    double a, b, c, s;
    while (1) {
        printf("Triangle id(-1 to end): ");
        scanf("%d", &i);
        printf("\n");
        if (i == -1) {
            break;
        }
        printf("Enter first side length: ");
        scanf("%lf", &a);
        printf("\n");
        printf("Enter second side length: ");
        scanf("%lf", &b);
        printf("\n");
        printf("Enter third side length: ");
        scanf("%lf", &c);
        printf("\n");        if (checkTriangle(a, b, c) == 0) {
            printf("This isn't a valid triangle! Try Again\n");
            continue;
        }
        s = (a + b + c) / 2;
        printf("Area is %.2f\n", pow(s * (s-a) * (s-b) * (s-c), 0.5));
    }
}
//  EXERCISE TWELVE (5.17)
int checkRightTriangle(double x, double y, double z) {
    double max = checkMaximum(x, y, z);
    int test = pow(x,2) + pow(y,2) + pow(z,2) - 2 * pow(max, 2);
    if (test == 0.0){
        return 1;
    }
    return 0;
}
int sideRightTriangle() {
    double a, b, c;
    while (1) {
        printf("Input first side(-1 to end): ");
        scanf("%lf", &a);
        if (a == -1) {
            break;
        }
        printf("Input second side: ");
        scanf("%lf", &b);
        printf("Input third side: ");
        scanf("%lf", &c);
        if (checkRightTriangle(a, b, c) == 1) {
            printf("It is a right triangle\n");
            continue;
        }
        printf("It is not a right triangle\n");
    }
    return 0;
}
//  EXERCISE THIRTEEN (5.18)
int isEven(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    return 0;
}
int checkIfEven() {
    int num;
    printf("Even = 1\n");
    printf("Odd = 0\n");
    while(1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("%d\n", isEven(num));
    }
}
//  EXERICSE FOURTEEN
void rectangularAsterisks(int side1, int side2) {
    for (int i = 0; i < side1; i++) {
        for (int j = 0; j < side2; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void rectangularCharacters(int side1, int side2, char fillCharacter) {
    for (int i = 0; i < side1; i++) {
        for (int j = 0; j < side2; j++) {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}
int main(){
    printf("Welcome to Group 9's project ...\n");
    rectangularCharacters(10, 10, '@');
    printf("By\n- Fadare Adeola\n- Taiwo Tijesuni\n- Ajayi Akintomiwa\n- Ifegbesan Tanitoluwa\n- Nwonu Livivngstone");
    return 0;
}
