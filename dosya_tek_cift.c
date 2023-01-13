#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *dosya;
	int a, karakter;
	dosya = fopen("tekciftsayilar.txt", "w");
	printf("Lütfen sayi giriniz.\n");
	scanf("%d",&a);
	for(int i=1; i<=a; i++) {
		if(i%2 == 0) {
			fprintf(dosya, "%d = Cift \n",i);
		}
		else(i%2 == 1) {
			fprintf(dosya, "%d = Tek \n",i);
		}
	}
	fclose(dosya);
	
	dosya = fopen("textciftsayilar.txt","r");
	do{
		karakter = getc(dosya);
		if(karakter != EOF) {
			putchar(karakter);
		}
	}while(karakter != EOF);
	fclose(dosya);
	return 0;
}