#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    while (x--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if (b == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        printf("%.1f\n",(float)a/(float)b);
        
    }
    return 0;
}
