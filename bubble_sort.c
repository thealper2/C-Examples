#include <stdio.h>

void bubblesort(int array[], int size){
	for(int i=0; i < size; i++) {
		for(int j=0; j < size-i; j++) {
			if(array[j-1] > array[j]) {
				int temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
			}
		}
	}
}
int main(){
	int dizi[50], size;
	printf("Eleman sayisi:\n");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		scanf("%d", &dizi[i]);
	}

	bubblesort(dizi, size);
	for(int i=0; i<size; i++) {
		printf("%d ", dizi[i]);
	}
	return 0;
}