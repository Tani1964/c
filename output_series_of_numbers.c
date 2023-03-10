#include <stdio.h>
//QUESTION
//--------
//1) Code a for loop that outputs values 1 through 20.
//2) Code a while loop that outputs even values from -10 through 10.
//3) Both loops go into the same source code file.


int main(){
    //For Loop
    printf("For Loop:\n");
    for(int i = 1; i <= 20; i++){
        printf("%d\n", i);
    };
    puts("");
    //While loop
    printf("While Loop:\n");
    int i = -10;
    while(i <= 10){
        printf("%d\n", i);
        i = i + 2;
    };
};
