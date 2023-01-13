#include <stdio.h>
int main(){
	char ch;
	int i;
	float x;
	double w;
	int a[5];
	float b[5];
	printf("char tipine ayrilan yer : %d byte'dir. \n",sizeof(ch));
	printf("int tipine ayrilan yer: %d byte'dir. \n",sizeof(i));
	printf("float tipine ayrilan yer: %d byte'dir. \n",sizeof(x));
	printf("double tipine ayrilan yer: %d byte'dir. \n",sizeof(w));
	printf("float tipinden b array'ine yer: %d byte'dir.\n",sizeof(b));
	printf("int tipinden a array'ine yer: %d byte'dir.\n",sizeof(a));
	return 0;

}