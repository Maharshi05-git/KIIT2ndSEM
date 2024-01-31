#include <stdio.h>

int main() {
	int n;
	int f,l;
	printf("Enter the number: \n");
	scanf("%d", &n);
	f=(n/100000);
	l=(n%10);
	printf("Sum of digits is: %d.\n", f+l);
	return 0;
}
