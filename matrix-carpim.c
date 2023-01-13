#include <stdio.h>
int main(){
	int A[2][3]={{1,2,3},{4,5,6}};
	int C[2][3];
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			C[i][j]=A[i][j] * 5;
		}
	}
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			printf("%d ",A[i][j]);
		}
		printf("\n*******\n");
	}
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			printf("%d ",C[i][j]);
		}
		printf("\n*******\n");
	}
	return 0;
}