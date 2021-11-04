#include <stdio.h>
 void main() {
	float c, f, ic, fi;
	printf("\nEnter temperature in Centigrade: ");
	scanf("%f", &c) ;
	fflush(stdin);
	printf("\nThe temperature in Centigrade is: %5.1f\n",c);
    	f = 1.8 * c + 32;
	printf("\nThe Fahrenheit equivalent of Centigrade %5.1f is: %5.1f\n", c, f);
	printf("\nEnter temperature in Fahrenheit: ");
 	scanf("%f", &fi);
	fflush(stdin);
	printf("\nThe temperature in Fahreneit is: %5.1f\n",fi);
    	ic = (fi - 32) / 1.8;
    	printf("\n The Centigrade equivalent of Fahrenheit %5.1f is: %5.1f\n", fi, ic);
}
