  #include <stdio.h>
#include <stdlib.h>

int main() {
	char input[100];
	printf("Please enter a program to run: ");
	gets(input);

	printf("\nYou entered: ");
	printf(input);
	printf("\n");

	system(input);

	return 0;
}
