#include <stdio.h>
#include <math.h>

int hypotenuse(int num[2]);

int main(){
    int  num[2]= {3, 4};
    printf("%d\n", hypotenuse(num));
};

int hypotenuse(int num[2]){
    int side1 = num[0] * num[0];
    int side2 = num[1] * num[1];

    int hypotenuse = sqrt(side1 + side2);

    return hypotenuse;
};
