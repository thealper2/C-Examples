#include <stdio.h>
void selectionsort(int arr[],int size){
	int mindex;
	for(int i=0;i<size;i++) {
		mindex=i;
		for(int j=i;j<size;j++) {
			if(arr[j]<arr[mindex]) {
				mindex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[mindex];
		arr[mindex] = temp;
	}
}
int main(){
	int dizi[50],size;
	int i;
	printf("Eleman sayisi:\n");
	scanf("%d",&size);
	for(i=0;i<size;i++) {
		scanf("%d",&dizi[i]);
	}
	selectionsort(dizi,size);
	for(i=0;i<size;i++) {
		printf("%d ",dizi[i]);
	}
	printf("\n");
	return 0;
}