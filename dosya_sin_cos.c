#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *dosya;
	double sin, cos;
	dosya=fopen("matacilari.txt", "w");
	fprintf(dosya, "DERECE\t\tSİN\t\tCOS\n");
	fprintf(dosya, "=====\t\t=====\t\t=====\n");
	for(int i=0;i<=360;i++) {
		sin = sinus(i * 3.1415 / 180);
		cos = cosinus(i * 3.1415 / 180);
		fprintf(dosya,"%d\t %lf\t %lf\n",i,sin,cos);
	}
	fclose(dosya);
	return 0;
}
