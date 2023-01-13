#include <stdio.h>
#include <stdlib.h>

void us_al(int a,int b,int *x){
	*x = 1;
	for(int i=0; i<b; i++){
		*x = *x * a;
	}
}

int main(){
	int x=4, y=5, sonuc;
	us_al(x, y, &sonuc);
	printf("%d \n",sonuc);
	return 0;
}