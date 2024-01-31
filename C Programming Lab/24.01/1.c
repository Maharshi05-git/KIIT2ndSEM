#include <stdio.h>

int main() {
	int s;
	int h,m;
	printf("Enter the time: \n");
	scanf("%d second.", &s);
	int ts=s;
	h=s/3600;
	m=((s-(3600*h))/60);
	s=(s-(3600*h)-(60*m));
	printf("%d second = %d Hour, %d Minute and %d Second\n",ts,h,m,s);
	return 0;
}

