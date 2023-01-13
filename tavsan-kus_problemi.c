#include <stdio.h>
#include <stdlib.h>

int main(){
	float tavsan=1234,kus=2200, tavhiz=0.038, kushiz=0.012;
	int yil=0;
	while(tavsan < kus){
		tavsan += tavsan * tavsan;
		kus += kus * kushiz;
		yil++;
		printf("Yil %d: Tavsan=%d kus=%d \n",yil,(int)tavsan,(int)kus);
	}
	printf("Tavsanlar kuslari %d yil sonra gecer. \n",yil);
	return 0;
}