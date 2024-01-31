#include <stdio.h>

int main() {
	int m;
	int km;
	printf("Enter the distance: \n");
	scanf("%d meter.", &m);
	int tm=m;
	km=m/1000;
	m=(m-(1000*km));
	printf("%d meter = %d Km and %d meters.\n",tm,km,m);
	return 0;
}
