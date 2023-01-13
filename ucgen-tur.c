#include <stdio.h>
#include <stdlib.h>

int main() {
	int aci1, aci2, aci3;
	printf("3 aci gir. \n");
	scanf("%d %d %d",&aci1,&aci2,&aci3);
	if(aci1+aci2+aci3==180){
		if(aci1==60 && aci2==60 && aci3==60){
			printf("Eskenar ucgen \n");
		}
		else if(aci1==aci2 && aci1==aci3 && aci1==aci3){
			printf("İkizkenar ucgen \n");
		}
	} else{
		printf("Cesitkenar ucgen \n");
	}
	return 0;
}