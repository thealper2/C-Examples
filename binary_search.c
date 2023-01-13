#include <stdio.h>
#include <stdlib.h>

int main() {
	int dim, i, j, first, end, mid, find_val;
	printf("Kac adet sayi gireceksiniz ?\n");
	scanf("%d", &dim);
	int dizi[dim];
	
	printf("Dizi elemanlarini giriniz.\n");
	for(i=0; i<dim; i++) {
		scanf("%d", &dizi[i]);
	}
	
	printf("Girilen Dizi: \n");
	for(i=0; i<dim; i++) {
		printf("%d\n", dizi[i]);
	}
	printf("Aranan sayi\n");
	scanf("%d", &find_val);
	first = 0;
	end = dim-1;
	mid = (first + end) / 2;
	while(first <= end) {
		if(dizi[mid] < find_val) {
			first = mid+1;
		} else if(dizi[mid] == find_val) {
			printf("%d sayisi %d. indexte bulundu.\n", find_val, mid+1);
		} else {
			end = mid-1;
		}
		mid = (first+end) / 2;
	}

	if(first>end) {
		printf("%d bulunamadi.\n", find_val);
	}
	return 0;
}
