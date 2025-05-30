#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d%d%d",&a,&b,&c);

        if((a>b||a>c)&&(a<c||a<b))
            printf("Case %d: %d",i,a);

        else if((b>a||b>c)&&(b<c||b<a))
            printf("case %d: %d",i,b);

        else
            printf("Case %d: %d",i,c);

        printf("\n");
    }

        return 0;
}
