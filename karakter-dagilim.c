#include <stdio.h>
#include <stdlib.h>


int main() {
    char c;
    int sayma[26]={0};
    int x, karakter = 0;
    printf("Lutfen bir text girin.\n");
    while((c=getchar())!='\n') {
        x=c-'a';
        if(x >=0 && x<26) {
            sayma[x]++;   
        }
        else {
            karakter++;
        }
    }

    printf("\nGirdiginiz text %d karakter iceriyor : \n", karakter);
    for(int i=0; i<26; i++) {
        printf("%d kez %c\n", sayma[i], 'a'+i);
    }
return 0;
}
