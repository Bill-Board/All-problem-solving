#include<stdio.h>
#include<conio.h>
int n,i,x,pos[1000002],neg[1000002];

int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x<0)neg[-x]++;
        else pos[x]++;
    }

    for(i=-1000000;i<=1000000;i++)
    {
        if(i<0 && neg[-i]>0)printf("%d in array %d times\n",i,neg[-i]);
        else if(i>=0 && pos[i]>0)printf("%d in array %d times\n",i,pos[i]);
    }
    return 0;
}
