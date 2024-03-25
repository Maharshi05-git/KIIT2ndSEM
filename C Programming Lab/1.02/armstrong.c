#include <stdio.h>

int main()
{
	int n,d,on,soc=0;
	scanf("n=%d",&n);
	on=n;
	for (;n!=0;) {
		d=n%10;
		soc+=d*d*d;
		n/=10;
	}
	if (on==soc) {
		printf("The given number is Armstrong\n");
	} else {
		printf("The given number is not Armstrong\n");
	}
	return 0;
}
