#include <stdio.h>

int main() {
	int n;
	int a,b,c;
	printf("Enter the number: \n");
	scanf("%d", &n);
	a=(n/100);
	b=((n%100)/10);
	c=(n%10);
	printf("Sum of digits is: %d.\n", a+b+c);
	return 0;
}
