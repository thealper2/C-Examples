#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi, birler_bas, onlar_bas;
	printf("Bir sayi giriniz \n");
	scanf("%d", &sayi);
	birler_bas = sayi % 10;
	onlar_bas = sayi % 100 / 10;
	printf("Birler basamagi: %d \n", birler_bas);
	printf("Onlar basamagi: %d \n", onlar_bas);
	return 0;
}