#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *file_copy,*file_paste;
	char giris[256], cikis[256];
	int ch;
	printf("Okunacak dosyanin adini girin.\n");
	gets(giris);
	if((file_copy = fopen(giris, "r")) == NULL) {
		printf("dosya yok\n");
		exit(1);
	}
	printf("yazilacak dosyanin ismini girin.\n");
	gets(cikis);
	if((file_paste = fopen(cikis, "r")) != NULL) {
		printf("dosya mevcut\n");
		exit(1);
	} else {
		file_paste = fopen(cikis,"w");
	}
	
	while((ch=fgetc(file_copy))!=EOF) {
		fputc(ch,file_paste);
	}
	fclose(file_copy);
	fclose(file_paste);
	printf("dosya kopyalandi.\n");
	return 0;
}