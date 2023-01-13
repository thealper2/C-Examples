#include <stdio.h>
#include <string.h>
void terscevir(char dizi[]){
	int temp, temp;
	temp = strlen(dizi);
	for(int i=0;i<temp;i++) {
		temp = dizi[i];
		dizi[i] = dizi[temp-1-i];
		dizi[temp-1-i] = temp;
	}
}
int main(){
	char text[200];
	scanf("%s",text);
	terscevir(text);
	printf("%s",text);
	return 0;
}