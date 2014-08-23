#include <stdio.h>
int main()
{
  int count;
  float a;
  float n = 0.0;
  while(scanf("%f",&a), a != 0.0){
	n = 0.0;
     for(count = 1;n < a;count++)
	{
		n += (1/(count+1.0));
	}
	
     printf("%d card(s)\n",--count);
  }
  return 0;
}  
