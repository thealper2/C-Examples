#include <stdio.h>
#include <string.h>
int dikdortgenalan(int x,int y){
	return x*y;
}
int dikdortgencevre(int x,int y){
	return 2*x*y;
}
int dairealan(int x){
	return 3*x*x;
}
int dairecevre(int x){
	return 2*3*x;
}
int main(){
	int secim,x,y,r;
	printf("---Hangi Geometrik Seklin Alanini ve Cevresini Bulmak istersiniz---\n");
	printf("1.Dikdortgen\n2.Daire\n");
	scanf("%d",&secim);
	if(secim==1)
	{
		printf("Dikdortgen uzun kenar giriniz.\n");
		scanf("%d",&x);
		printf("Dikdortgen kısa kenar giriniz.\n");
		scanf("%d",&y);
		printf("Uzun kenari %d Kisa kenari %d olan diktortgenin alanı %d cevresi %d",x,y,dikdortgenalan(x,y),dikdortgencevre(x,y));
	}
	if(secim==2)
	{
		printf("Daire yaricap giriniz.\n");
		scanf("%d",&r);
		printf("Yaricapi %d olan dairenin alani %d cevresi %d",r,dairealan(r),dairecevre(r));
	}
	return 0;
}