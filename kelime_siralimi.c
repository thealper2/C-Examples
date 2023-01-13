#include <stdio.h>
#include <string.h>
int siralimi(char *str){
	int len = strlen(str); 
	for(int i=0; i<len; i++) {
		for(int j=i+1; j<len; j++) {
			if(str[j] < str[i]) {
				return 0;
			}
			if((str[j] > str[i]) && i == len-1 && j==len-1) {
				return 1;
			}
		}
	}
}
int main(){
	if(siralimi("aedbzgc")) {
		printf("aedbzgc siralidir.\n");
	} else {
		printf("aedbzgc sirali degildir.\n");
	}
	return 0;
}