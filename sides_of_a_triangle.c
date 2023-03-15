#include <stdio.h>

int right_angle(int num[3]);

int main(){
    int  num[3]= {3, 4, 5};
    printf("%d\n", num[0]);
    right_angle(num);
};

int right_angle(int num[3]){
    int side1 = num[0] * num[0];
    int side2 = num[1] * num[1];
    int side3 = num[2] * num[2];
    if ((side1 + side2) == side3){
        printf("It's a right angled triangle\n");
        return(0);
    }else{
        printf("It's not a right angle triangle\n");
        return(1);
    };
};
