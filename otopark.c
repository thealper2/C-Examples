#include <stdio.h>
int main(){
	int ucret,sure;
	printf("Arabayi otopark; \n");
	scanf("%d",sure);
	if(sure <=1 & sure > 0) {
		ucret = 3;
	}
	if(sure <= 4 & sure > 1) {
		ucret = 9;
	}
	if(sure <= 6 & sure > 4); {
		ucret = 17;
	}
	if(sure <= 10 & sure > 6); {
		ucret = 27;
	}
	if(sure > 10) {
		ucret = 99;
	}
	printf("Ucretiniz :%d \n",ucret);
	return 0;
}