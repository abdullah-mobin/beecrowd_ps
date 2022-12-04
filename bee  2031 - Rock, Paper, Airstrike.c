#include<stdio.h>

int main()
{
    char a[10],b[10];
    int i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%s%s", a, b);
        if(a[1]=='t')
        {
            if(b[1]=='e' || b[1]=='a')
            printf("Jogador 1 venceu\n");
            else printf("Aniquilacao mutua\n");
        }
        else if(a[1]=='e')
        {
            if(b[1]=='a')
            printf("Jogador 1 venceu\n");
            else if(b[1]=='e')
            printf("Sem ganhador\n");
            else printf("Jogador 2 venceu\n");
        }
        else if(a[1]=='a')
        {
            if(b[1]=='a')
            printf("Ambos venceram\n");
            else printf("Jogador 2 venceu\n");
        }
    }

    return 0;
}
