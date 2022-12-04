#include<stdio.h>
int main()
{
    int res=0,a,i;
    int fact[]={362880,40320, 5040, 720, 120, 24, 6, 2, 1};
    scanf("%d",&a);
    for ( i = 0; i < 9; i++)
    {
        res = res+a/fact[i];
        a = a%fact[i];
    }
    printf("%d\n",res);
    return 0;
}
