#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
	char adsoyad[25];
	char ders[25];
	int vize;
	int dersnotu;
	int final;
};

int main(){
	FILE *dosya;
	int a;
	int i;
	float ort;
	printf("Ogrenci Sayisi: \n");
	scanf("%d",&a);
	struct ogrenci ogr[a];
	dosya=fopen("derslerim.txt","w");
	if(dosya==NULL) {
		printf("Dosya olusturulamadi.\n");
	} else {
		for(i=0;i<a;i++) {
			printf("Adi Soyadi:");
			gets(ogr[i].adsoyad);
			printf("Ders Adi:");
			gets(ogr[i].ders);
			printf("Vize Notu:");
			scanf("%d",&ogr[i].vize);
			printf("Ders Notu:");
			scanf("%d",&ogr[i].dersnotu);
			printf("Final Notu:");
			scanf("%d",&ogr[i].final);
			ort=(float)ogr[i].vize*0.2+(float)ogr[i].dersnotu*0.2+(float)ogr[i].final*0.6;
			printf("Ortalama: %f\n",ort);
			fprintf(dosya,"%s\t %s\t %d\t %d\t %d\t %.2f\n",ogr[i].adsoyad,ogr[i].ders,ogr[i].vize,ogr[i].dersnotu,ogr[i].final,ort);
		}
		fclose(dosya);
	}
	return 0;
}
