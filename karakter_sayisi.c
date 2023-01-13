#include <stdio.h>
#include <stdlib.h>
int main(){
	char cumle[100];
	int i=0;
	printf("Lütfen bir cümle giriniz \n");
	gets(cumle);
	while(cumle[i]){
		i++;
	}
	printf("Karakter sayisi : %d \n",i);
	return 0;
}