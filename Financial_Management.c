#include <stdio.h>
#define YEAR 12
int main()
{
	float count = 0;
	float c;
	int counter;
	for(counter = 0; counter < YEAR; counter++)
	{
		scanf("%f",&c);
		count += c;
	}
	printf("$%.2f\n",(count/YEAR));
	return 0;
}