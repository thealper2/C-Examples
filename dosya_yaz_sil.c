#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[]){
	char dizi [100];
	FILE *dosyaYaz = fopen("ucislem.txt","w");
	printf("Dosya olusturuldu.\n");
	printf("Veri girisi yapiniz.\n");
	gets(dizi);
	fprintf(dosyaYaz,dizi);
	printf("Veri girisi gerceklestirildi.\n");
	fclose(dosyaYaz);
	FILE *dosyaOku = fopen("ucislem.txt","r");
	while(!feof(dosyaOku))
	{
		fputchar(fgetc(dosyaOku));
	}
	printf("\nOkuma islemi tamamlandi.\n");
	fclose(dosyaOku);
	int sonuc = remove("ucislem.txt");
	if(sonuc == 0) {
		printf("Silme islemi tamamlandi.\n");	
	} else {
		printf("Dosya silinemedi.");
	}
	return 0;
}