#include <stdio.h>
#include <math.h>

int enbuyuk( int x,int y,int z );
int main(void){
	int sayi1;
	int sayi2;
	int sayi3;
	printf("3 Tane sayi giriniz: \n");
	scanf("%d %d %d", &sayi1,&sayi2,sayi3);
	printf("En buyuk: %d \n", enbuyuk(sayi1, sayi2, sayi3) );
	getchar();
	return 0;
}
int enbuyuk( int x,int y,int z){
	int enbuyuk = x;
	if ( y > enbuyuk){
		enbuyuk = y;
	}
	if ( z > enbuyuk){
		enbuyuk = z;
	}
	return enbuyuk;
}