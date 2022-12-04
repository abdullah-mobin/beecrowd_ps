#include<stdio.h>
int main()
{
	char x;
	float arr[12][12],s=0.0;
	int a,i,j;
	scanf("%c",&x);
	for ( i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			scanf("%f",&arr[i][j]);
			if (j>(11-i) && j>i)
			{
				s=s+arr[i][j];
			}
			
		}
		
	}
	if (x=='S')
	{
		printf("%.1f\n",s);
	}
	else 
	{
		printf("%.1f\n",s/30);
	}
	
	

	return 0;
}
