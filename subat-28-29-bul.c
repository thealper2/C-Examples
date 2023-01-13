#include <stdio.h>

int main(){
	int sene;
	printf("Hangi yil ? \n");
	scanf("%d", &sene);
	if((sene % 4 == 0 && sene % 100 !=0) || sene % 400 == 0) {
		printf("%d yili subat ayi 29 ceker. \n",sene);
	} else {
		printf("%d yili subat ayi 28 ceker. \n",sene);
	}
	return 0;
}