#include<stdio.h>
/// jodi bole 1 theke n porjonto perfect number bair koro?
/// than eta korbi.
int main()
{
    int n,sum=0;scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        sum=1;
        for(int i=2;i*i<=j;i++)
        {
            if(j%i==0)
            {
                sum+=i;
                if(i*i!=j)sum+=(j/i);
            }
        }
        if(sum==j)printf("%d is a perfect number\n",j);/// jodi bole konta konta perfect number
        //else printf("%d is not a perfect number\n",j);/// jodi bole konta konta perfect na.
    }
    return 0;
}
/// sun, 1 ki perfect ki perfect na sure na ami.........!
