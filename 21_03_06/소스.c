#include<stdio.h>

int main(void)
{
	double num[20];
	
	double sum=0;
	int i;
	for (i = 0; i < 20; i++)
	{
		 scanf_s("%lf", &num[i]);
		 double result = (num[i] - 25.7675) * (num[i] - 25.7675);
		 
		 sum += result;
	}
	printf("%lf",sum);
	return 0;
	
}
