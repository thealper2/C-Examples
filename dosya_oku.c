#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *dosya;
	char satir[100], *karakter;
	dosya = fopen("adix", "r");
	if(dosya == NULL) {
		printf("Dosya Bulunamadi.\n");
	} else {
		do {
			karakter=fgets(satir,100,dosya);
			if(karakter != NULL) {
				printf("%s",satir);
			}
		} while(karakter != NULL);
		fclose(dosya);
		printf("Okuma islemi tamamlandı. \n");
	}
	return 0;
}