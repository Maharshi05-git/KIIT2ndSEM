#include <stdio.h>

int main()
{
	int num, factor;
	scanf("n=%d", &num);
	printf("The factors are \n");
	for (int i=1;i<=num;i++) {
		if (num%i==0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
