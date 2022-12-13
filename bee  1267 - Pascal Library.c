#include<stdio.h>
int main()
{
    int i,j;
    int n,d,x;
    while (scanf("%d%d",&n,&d)==2)
    {
        if (n==0&&d==0) break;
        else
        {
            int ar[d][n];
            for ( i = 0; i < d; i++)
            {
                for ( j = 0; j < n; j++)
                {
                    scanf("%d",&ar[i][j]);
                }
            }
            for ( i = 0; i < d; i++)
            {
                x=0;
                for (j = 0; j < d; j++)
                {
                    if (ar[j][i]==1)
                    {
                        x++;
                    }
                }
                if (x==d){
                    printf("yes\n");
                    break;
                }
            }
            if(x!=d)
                printf("no\n");
        }
    }
    return 0;
}
