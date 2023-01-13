#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct ogrenci{
	char adSoyad[25];
	int id;
	float notlar[5];
};

struct ogrenci ogrenciOlustur(struct ogrenci ogr1) { 
	printf("Ogrenci ad ve soyadini girin: "); gets(ogr1.adSoyad);
	printf("Ogrencinin id sini gir: "); scanf("%d",&ogr1.id);
	for(int i=0;i<5;i++) {
		printf("Ogrencinin %d. ders notunu girin: ",i+1);
		scanf("%f",&ogr1.notlar[i]);
	}
	return ogr1;
}
void ogrenciYazdir(struct ogrenci ogr2) {
	printf("Adi ve Soyadi: %s\n",ogr2.adSoyad);
	printf("Ogrencinin id numarasi: %d\n",ogr2.id);
	for(int i=0;i<5;i++) {
		printf("Ogrencinin %d. notu: %f\n",i+1,ogr2.notlar[i]);
	}	
}

int main() {
	struct ogrenci student;
	ogrenciYazdir(ogrenciOlustur(student));
	return 0;
}