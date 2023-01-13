#include <stdio.h>
#include <string.h>

int count(char * kelime,char harf){
	int count=0;
	for(int i=0;i<strlen(kelime);i++) {
		if(*(kelime) == harf) {
			count+=1;
		}
	}
	printf("%c harfi %s kelimesinde %d kere geçiyor.\n",harf,kelime,count);
	return count;
}

int main() {
	char *kelime = "araba";
	count(kelime,'a');
	return 0;
}