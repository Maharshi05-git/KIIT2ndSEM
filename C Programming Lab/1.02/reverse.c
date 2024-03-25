#include <stdio.h>

int main()
{
	int n, on,remainder, reverse=0;
	scanf("n=%d", &n);
	on=n;

	for (;n!=0;) {
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	printf("The reverse of %d is %d\n",on, reverse);
	return 0;
}
