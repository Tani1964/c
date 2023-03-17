#include <stdio.h>
#include <string.h>

#define SIZE 64

int main(){
    char *input;

    input = malloc( sizeof(char) * SIZE );
    if( input == NULL ){
        puts("Unable to allocate memory");
    };

    printf("What's your name: ");
    fgets(input, SIZE, stdin);


    printf("Your name is %s", input);
    return(0);
};
