#include <stdio.h>
#include <stdlib.h>

float ortalamabul(int *dizi,int boyut) {
    int i;
    float toplam=0;
    for(i=0; i<boyut; i++) {
        toplam += dizi[i];
    }
    return (float)toplam/boyut;
}

int main() {
   int n;
   float ort;
   printf("Kac adet eleman girilecek\n");
   scanf("%d",&n);
   int dizi[n];
   for(int i=0;i<n;i++) {
       printf("%d. sayiyi giriniz:\n",i+1);
       scanf("%d",&dizi[i]);
   }
   ort = ortalamabul(dizi,n);
   printf("Girdigimiz sayilarin ortalamasi %.3f",ort);
    return 0;
}
