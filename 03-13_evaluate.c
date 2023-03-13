#include <stdio.h>

void evaluate(int x);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	if (x < 10){
        printf("%d less than 10\n", x);
	}else if (x == 10){
        printf("%d equal to 10", x);
	}else{
        printf("%d greater than 10\n", x);
	}
}

