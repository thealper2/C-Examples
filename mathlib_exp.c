#include <stdio.h>
#include <math.h>

int main(){
	 printf("sqrt(%.1f) = %.1f \n",123.0, sqrt(123.0) );
	 printf("sqrt(%.1f) = %.1f \n", 9,0, sqrt(9.0) );

	 printf("exp(%.1f) = %.1f \n", 4.0, exp(4.0) );
	 printf("exp(%.1f) = %.1f \n", 5.0, exp(5.0) );

	 printf("log(%f) = %.1f \n", 2.12345, log(2.12345) );
	 printf("log(%f) = %.1f \n", 7.51661, log(7.51661) );

	 printf("log10(%.1f) = %.1f \n", 1.0, log10(1.0) );
	 printf("log10(%.1f) = %.1f \n", 10.0, log10(10.0) );
	 printf("log10(%.1f) = %.1f \n", 100.0, log10(100.0) );

	 printf("fabs(%.1f) = %.1f \n", 15.2, fabs(15.2) );
	 printf("fabs(%.1f) = %.1f \n", 0.0, fabs(0.0) );
	 printf("fabs(%.1f) = %.1f \n", -136.5, fabs(-136.5) );

	 printf("ceil(%.1f) = %.1f \n", 19.32, ceil(19.32) );
	 printf("ceil(%.1f) = %.1f \n", -19.28, ceil(-19.28) );

	 printf("floor(%.1f) = %.1f \n", 59.2, floor(59.2) );
	 printf("floor(%.1f) = %.1f \n", -59.8, floor(-59.8) );

	 printf("pow(%.1f, %.1f) = %.1f \n", 3.0, 5.0, pow(3.0, 5.0) );
	 printf("pow(%.1f, %.1f) = %.1f \n", 9.0, 0.5, pow(9.0, 0.5) );

	 printf("tan(%.1f) = %.1f \n", 0.0, tan(0.0) );
	 printf("cos(%.1f) = %.1f \n", 0.0, cos(0.0) );
	 printf("sin(%.1f) = %.1f \n", 0.0, sin(0.0) );
	 return 0;
}