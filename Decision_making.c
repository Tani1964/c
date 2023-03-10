#include <stdio.h>

//this program collect input from users and give a result based on the options

int main(){
    int input;

    printf("Choose between options 1, 2 or 3: ");
    scanf("%d", &input);

    switch(input){
        case 1:
            printf("You colour is Red\n");
            break;
        case 2:
            printf("You colour is Green\n");
            break;
        case 3:
            printf("You colour is Blue\n");
            break;
        default:
            printf("Choose between 1, 2, or 3.\n");
            break;
    };

    return(0);
};
