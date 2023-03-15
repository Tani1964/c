#include <stdio.h>
#include <string.h>

int is_even(int num);

int main(){
    int num = 5;
    printf("%d",is_even(num));
};

int is_even(int num){
    int mod = num % 2;
    if (mod == 0){
        printf("is even\n");
        return(0);
    }else{
        printf("is odd\n");
        return(1);
    };
};
