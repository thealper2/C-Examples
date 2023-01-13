#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	float x1;
	float y1;
	float x2;
	float y2;
};
struct point noktaOlustur(struct point nokta){
	printf("Noktanin x koordinatini girin: ");
	scanf("%f\n",&nokta.x1);
	printf("Noktanin y koordinatini girin: ");
	scanf("%f\n",&nokta.y1);
	printf("Nokta ornegi olusturuldu.\n");
	printf("Noktanin x koordinatini girin: ");
	scanf("%f\n",&nokta.x2);
	printf("Noktanin y koordinatini girin: ");
	scanf("%f\n",&nokta.y2);
	printf("Nokta olusturuldu.\n");
	return nokta;
}
void noktaYazdir(struct point nokta){
	printf("Noktanin x koordinati %f y koordinati %f'tir.\n",nokta.x1,nokta.y1);
	printf("Noktanin x koordinati %f y koordinati %f'tir.\n",nokta.x2,nokta.y2);
}

float uzaklikHesapla(struct point a){
	float uzaklik;
	uzaklik=sqrt((a.x1-a.y1)*(a.x1-a.y1)+(a.x2-a.y2)*(a.x2-a.y2));
	printf("Verilen iki nokta arasindaki uzaklik: %f",uzaklik);
}
int main() {
	struct point nokta;
	noktaYazdir(noktaOlustur(nokta));
}