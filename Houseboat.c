#include <stdio.h>
#define PI 3.14
#define DECAY 50
int main()
{
	int counter;
	scanf("%d",&counter);
	int i;
	float X, Y, area;
	for(i = 0; i < counter; i++)
	{
		scanf("%f%f",&X,&Y);
		area = (X * X + Y * Y) * PI / 2;
		int year;
		year  =	area / DECAY;
		printf("Property %d: This property will begin eroding in year %d.\n",(i+1),++year);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}		
