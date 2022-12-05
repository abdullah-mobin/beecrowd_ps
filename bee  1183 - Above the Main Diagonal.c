#include <stdio.h>

int main()
{
    double arr[12][12],s = 0.0;
    char x;
    int i,j;
    scanf("%c",&x);
    
    for( i = 0; i < 12; i++)
    {
        for( j = 0; j < 12; j++)
        {
            scanf("%lf",&arr[i][j]);
            if(j>i)
                s = s+ arr[i][j];
        }
        
   }
    
    if(x == 'S')
         printf("%.1f\n", s);
    else
         printf("%.1f\n", s/66.0);
    return 0;
}
