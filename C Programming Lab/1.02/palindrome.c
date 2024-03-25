#include <stdio.h>

int main()
{
	int n,d,on,rev=0;
	scanf("n=%d", &n);
	on=n;
	for (;n!=0;) {
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
	if (on==rev) {
		printf("The given number is Palindrome\n");
	} else {
		printf("The given number is not Palindrome\n");
	}
	return 0;
}
