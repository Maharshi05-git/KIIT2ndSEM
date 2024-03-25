#include <stdio.h>

int main()
{
	int num,sum=0;
	float average;
	printf("Enter 2 numbers:\n");
	for (int i=0;i<2;i++) {
		scanf("%d", &num);
		sum=sum+num;
	}	
	average=sum/2;
	printf("The sum is %d\n", sum);
	printf("The average is  is %f\n", average);
	return 0;
}
