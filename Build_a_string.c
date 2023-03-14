#include <stdio.h>
#include <string.h>

int main(){
    char input1[32];
    char input2[32];
    char buffer[64];

    printf("Input 1st text: ");
    fgets(input1,32,stdin);

    printf("Input 2nd text: ");
    fgets(input2,32,stdin);

    strcpy(buffer, input1);
    strcat(buffer, input2);

    printf("%s\n", buffer);
};
