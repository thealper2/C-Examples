#include <stdio.h>

void insertionsort(int arr[],int size){
	int element;
	for(int i=1;i<size;i++) {
		element= arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>element) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = element;
		
	}
}
int main(){
	int dizi[50], size;
	printf("Eleman sayisi:\n");
	scanf("%d",&size);
	for(int i=0;i<size;i++) {
		scanf("%d",&dizi[i]);
	}
	insertionsort(dizi,size);
	for(int i=0;i<size;i++) {
		printf("%d ",dizi[i]);
	}
	printf("\n");
	return 0;
}