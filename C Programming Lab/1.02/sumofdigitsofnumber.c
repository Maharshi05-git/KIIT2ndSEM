#include <stdio.h>

int main()
{
	int n,remainder,sum=0,on;
	scanf("n=%d",&n);
	on=n;
	for (;n!=0;) {
		remainder=n%10;
		sum+=remainder;
		n/=10;
	}
	printf("The sum of digits of %d is %d\n",on,sum);
	return 0;
}
