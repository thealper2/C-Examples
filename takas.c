#include <stdio.h>

int main(){
	int x = 2, y = 1, z;
	printf("Takastan Once: \n");
	printf("x = %d; y = %d \n", x,y);
	z = x;
	x = y;
	y = z;
	printf("Takastan sonra: \n");
	printf("x = %d; y = %d; \n", x,y);
}