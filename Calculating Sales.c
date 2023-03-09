#include <stdio.h>

int main(){
//declare variables
    int product_num[] = {1, 2, 3, 4, 5};

    float retail_price[6] = {2.98, 4.50, 9.98, 4.49, 6.87};
//use switch case to determine retail price of each product
    for ( int i = 0; i < 5; i++){
        switch(product_num[i]){
            case 1:
                printf("Product %d price is: %.2f\n", product_num[i], retail_price[i]);
                break;
            case 2:
                printf("Product %d price is: %.2f\n", product_num[i], retail_price[i]);
                break;
            case 3:
                printf("Product %d price is: %.2f\n", product_num[i], retail_price[i]);
                break;
            case 4:
                printf("Product %d price is: %.2f\n", product_num[i], retail_price[i]);
                break;
            case 5:
                printf("Product %d price is: %.2f\n", product_num[i], retail_price[i]);
                break;
        };
    };
//calculate total value of all products
//print answer
};
