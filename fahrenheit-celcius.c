#include <stdio.h>
#include <stdlib.h>

float Fah_Celc(float f) {
    return (0.5555)*(f-32);
}

float Celc_Fah(float c) {
    return (1.8*c)+32;
}

int main() { 
    float f, c, secim;
    printf("1 Fahrenheit => Celcius\n");
    printf("2 Celcius => Fahrenheit\n");
    scanf("%f",&secim);
    if(secim==1) {
        printf("f: \n");
        scanf("%f",&f);
        printf("%f F = %f C dur\n",f,Fah_Celc(f));
    } else if(secim==2) { 
        printf("c: \n");
        scanf("%f",&c);
        printf("%f C =%f F dir\n",c,Celc_Fah(c));
    } else {
        printf("Yanlis secim yaptiniz");
    }
    return 0;
}
