#include<stdio.h>
int main()
{
    long long int x;
    scanf("%lld",&x);
    long long int rev=0, rem, tem=x;
    while (tem!=0)
    {
        rem = tem%10;
        printf("%lld",rem);
        tem = tem/10;
    }
    printf("\n");
    return 0;
}
