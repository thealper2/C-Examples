#include <stdio.h>

int main() {
  int A[3][4];
  int B[4][2];
  A[0][0]=1;A[0][1]=3;A[0][2]=5;A[0][3]=7;
  A[1][0]=2;A[1][1]=4;A[1][2]=6;A[1][3]=8;
  A[2][0]=1;A[2][1]=2;A[2][2]=3;A[2][3]=4;
  B[0][0]=10;B[0][1]=1;
  B[1][0]=5;B[1][1]=2;
  B[2][0]=20;B[2][1]=1;
  B[3][0]=10;B[3][1]=2;
  printf("A Matrisi:\n");
  int i=0;
  int a;
  for(i=0;i<=2;i++){
  for(a=0;a<=3;a++){
    printf("[ %d ]",A[i][a]);
  }
  printf("\n");
  }
  printf("B Matrisi:\n");
  for(i=0;i<=3;i++){
  for(a=0;a<=1;a++){
    printf("[ %d ]",B[i][a]);
  }
  printf("\n");
  }
  int toplam,top1,top2,top3,top4,top5,top6;
  for(i=0;i<=3;i++){
      printf("A[0][%d]= %d * B[%d][0]= %d\n ",i,A[0][i],i,B[i][0]);
    top1=top1+(A[0][i]*B[i][0]);
  }
  printf("=%d",top1);
  printf("\n\n");
    for(i=0;i<=3;i++){
      printf("A[0][%d]= %d * B[%d][1]= %d\n ",i,A[0][i],i,B[i][1]);
    top2=top2+(A[0][i]*B[i][1]);
  }
  printf("=%d",top2);
  printf("\n\n");
    for(i=0;i<=3;i++){
      printf("A[1][%d]= %d * B[%d][0]= %d\n ",i,A[1][i],i,B[i][0]);
    top3=top3+(A[1][i]*B[i][0]);
  }
  printf("=%d",top3);
  printf("\n\n");
      for(i=0;i<=3;i++){
      printf("A[1][%d]= %d * B[%d][1]= %d\n ",i,A[1][i],i,B[i][1]);
    top4=top4+(A[1][i]*B[i][1]);
  }
  printf("=%d",top4);
  printf("\n\n");
      for(i=0;i<=3;i++){
      printf("A[2][%d]= %d * B[%d][0]= %d\n ",i,A[2][i],i,B[i][0]);
    top5=top5+(A[2][i]*B[i][0]);
  }
  printf("=%d",top5);
  printf("\n\n");
      for(i=0;i<=3;i++){
      printf("A[2][%d]= %d * B[%d][1]= %d\n ",i,A[2][i],i,B[i][1]);
    top6=16;
  }
  printf("=%d",top6);
  printf("\n\n");
  printf("A ile B matrisinin çarpımının sonucu olusan C matrisi:\n");
  int C[3][2];
  C[0][0]=top1;C[0][1]=top2;
  C[1][0]=top3;C[1][1]=top4;
  C[2][0]=top5;C[2][1]=top6;
  for(i=0;i<=2;i++){
    for(a=0;a<=1;a++){
      printf("[ %d ]",C[i][a]);
    }
    printf("\n");
  }
  return 0;
  
}