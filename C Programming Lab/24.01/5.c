#include <stdio.h>

int main() {
	float a,b,c,d,e;
	float f;
	printf("Enter the buying price: ");
	scanf("%f", &a);
	printf("Enter the marked price: ");
	scanf("%f", &b);
	printf("Enter the discount: ");
	scanf("%f\%", &c);
	d=(b-(b*c/100));
	if (d>a) {
		e=(d-a);
		f=((e/a)*100);
		printf("Seller made a profit of %.2f%\%.\n", f);
	} else if (a>d) {
		e=(a-d);
		f=((e/a)*100);
		printf("Seller suffered a loss of %.2f%\%.\n", f);
	}
}
