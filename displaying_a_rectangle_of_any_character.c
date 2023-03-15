#include <stdio.h>

int rectangle(int side1, int side2, char symbol);

int main(){
    int length;
    int breath;
    char symbol;

    printf("Input length of your rectangle: ");
    scanf("%d", &length);

    printf("Input breath of your rectangle: ");
    scanf("%d", &breath);

    printf("Input symbol of your choice: ");
    scanf(" %c", &symbol);

    rectangle(length, breath, symbol);
};

int rectangle(int side1, int side2, char symbol){
    for(int i=0; i < side1; i++){
      for(int j=0; j < side2; j++){
        printf("%c", symbol);
      };
      printf("\n");
    };
};
