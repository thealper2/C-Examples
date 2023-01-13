#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct sayilar{
	int x;
	int y;
	int z;
};
struct sayilar denklemOlustur(){
	struct sayilar as;
	printf("Sirasiyla x^2'li, x'li teriminlerin katsayisini ve sabitini girin: ");
	scanf("%d %d %d",&as.x,&as.y,&as.z);
	return as;
}
void denklemYazdir(struct sayilar ab){
	float kok;
	printf("Denklem: (%dx^2) + (%dx) + (%d)\n",ab.x,ab.y,ab.z);
	printf("Denklemin kokleri: %f %f\n");
}
float kokBul(struct sayilar abc){
	float delta;
	delta = abc.y*abc.y-(4*abc.x*abc.z);
	printf("----kokBul fonksiyonu cagirildi!!!----\n");
	if(delta>0)
	{
		printf("Diskriminant: %f\n",delta);
		printf("Denklemin iki reel koku var!!\n");
	}
	else if(delta==0)
	{
		printf("Diskriminant: %f\n",delta);
		printf("Birbirine esit iki kok var!!\n");
	}
	else
	{
		printf("Diskriminant: %f\n",delta);
		printf("Denklemin reel koku yoktur!!\n");
	}
}
int main(){
	struct sayilar denklem1 = denklemOlustur();
	struct sayilar denklem2 = denklemOlustur();
	struct sayilar denklem3 = denklemOlustur();
	denklemYazdir(denklem1);
	kokBul(denklem1);
	denklemYazdir(denklem2);
	kokBul(denklem2);
	denklemYazdir(denklem3);
	kokBul(denklem3);
	return 0;
}