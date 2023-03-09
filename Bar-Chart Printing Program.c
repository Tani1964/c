#include <stdio.h>

int main(){
//declare variables
    char star;
    int num[6] = {1,2,3,4,5};

//collect the five numbers as input

    for (int i = 0; i < 5; i++){
        for (int j = num[i]; j > 0; j--){
            printf("*");
        };
        printf("\n");
        //printf("%d\n", num[i]);
    }


};
