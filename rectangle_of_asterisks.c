#include <stdio.h>

int rectangle(int side1, int side2);
int main(){
    int length;
    int breath;

    printf("Input length and breath of your rectangle: ");
    scanf("%d %d", &length, &breath);

    rectangle(length, breath);
};

int rectangle(int side1, int side2){
    for(int i=0; i < side1; i++){
      for(int j=0; j < side2; j++){
        printf("*");
      };
      printf("\n");
    };
};
