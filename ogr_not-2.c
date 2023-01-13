#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sinif{
 char ad[30];
 char soyad[30];
 int id;
 int mat;
 int biyo;
 int kim;
 int fiz;
 int geo;
 float ort;
}ogrenciler;

void listele(ogrenciler defter[], int m) {
  printf("AD----SOYAD----AD---MATEMATİK---BIYOLOJI--KIMYA--FIZIK--GEOMETRI\n");
  for(int i=0;i<m;i++) {
      printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",defter[i].ad,defter[i].soyad,defter[i].id,defter[i].mat,defter[i].biyo,defter[i].kim,defter[i].fiz,defter[i].geo);
  }
}

float ortalama(ogrenciler defter[],int m) {
  for(int i=0;i<5;i++) {
      defter[i].ort = (defter[i].mat + defter[i].biyo + defter[i].kim + defter[i].fiz + defter[i].geo)/5;
  }
}

float ortalamaBas(ogrenciler defter[],int m) {
  for(int i=0;i<5;i++) {
      printf("%s %s isimli %d nolu ogrencinin not ortalamasi: %f \n",defter[i].ad,defter[i].soyad,defter[i].id,defter[i].ort);
  }
}

int main() {
  int i;
  int ders;
  ogrenciler defter[5];
  for(int i=0;i<5;i++)
  {
    printf("Lutfen %d. ogrencinin bilgilerini giriniz.\n",i+1);
    printf("%d. ogrencinin adi ve soyadi= ",i+1);
    scanf("%s %s",&defter[i].ad,&defter[i].soyad);
    printf("%d.ogrencinin id si= ",i+1);
    scanf("%d",&defter[i].id);
  }
  yeniden:
  printf("Hangi dersi girmek istersiniz.\n1-Matematik\n2-Biyoloji\n3-Kimya\n4-Fizik\n5-Geometri");
  scanf("%d",&ders);
  if(ders==1) {
    for(int i=0;i<5;i++) {
      printf("%d. ogrencinin matematik notunu girin.\n",i+1);
      scanf("%d",&defter[i].mat);
    }
    goto yeniden;
  }
  if(ders==2) {
    for(int i=0;i<5;i++) {
      printf("%d. ogrencinin biyoloji notunu girin.\n",i+1);
      scanf("%d",&defter[i].biyo);
    }
    goto yeniden;
  }
  if(ders==3) {
    for(int i=0;i<5;i++) {
      printf("%d. ogrencinin kimya notunu girin.\n",i+1);
      scanf("%d",&defter[i].kim);
    }
    goto yeniden;
  }
  if(ders==4) {
    for(int i=0;i<5;i++) {
      printf("%d. ogrenc-inin fizik notunu girin.\n",i+1);
      scanf("%d",&defter[i].fiz);
    }
    goto yeniden;
  }
  if(ders==5) {
    for( int i=0;i<5;i++) {
      printf("%d. ogrencinin geometri notunu girin.\n",i+1);
      scanf("%d",&defter[i].geo);
    }
  }
  
  listele(defter,5);
  ortalama(defter,5);
  ortalamaBas(defter,5);
  return 0;
}