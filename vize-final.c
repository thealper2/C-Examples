#include <stdio.h>
int main(){
	float vizeNot,dersNot,finalNot;
	float ortalama=0;

	printf("Vize Notunuzu Giriniz: \n");
	scanf("%f",&vizeNot);

	printf("Final Notunuzu Giriniz: \n");
	scanf("%f",&finalNot);

	printf("Ders Notunuzu Giriniz: \n");
	scanf("%d",&dersNot);

	ortalama = ((vizeNot/100)*40 + (finalNot/100)*50 + (dersNot/100)*10);

	if(ortalama>=50) {
		printf("Gectiniz.\n");
	} else if(ortalama >= 35 && ortalama<50) {
		printf("Kosullu Gectiniz.\n");
	} else {
		printf("Kaldiniz.\n");
	}
	return 0;
}