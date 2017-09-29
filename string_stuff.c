#include <stdio.h>
#include <string.h>

int main(){
	char first_half[] = "start";
	char second_half[] = "end";
	printf("Function header: strcat(char[] base, char[] cat)\n");
	printf("base: %s, cat: %s\n", first_half, second_half);
	strcat(first_half, second_half);
	printf("strcat(start, end): %s\n", first_half);
	char x[] = "start";
	strncat(x, second_half, 3);
	printf("\nstrncat(start, end, 3): %s\n", x);

	

}
