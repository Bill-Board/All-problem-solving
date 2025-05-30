#include<stdio.h>
#include<conio.h>
int n,i,x,arr[1000002];

int main()
{
    scanf("%d",&n);
    int m1=-10000000,m2=-10000000;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(m1<arr[i])m1=arr[i];
    }
    for(i=1;i<=n;i++)
    {
        if(m1!=arr[i])
        {
            if(m2<arr[i])m2=arr[i];
        }
    }
    printf("The 2nd Largest element is %d\n",m2);
    return 0;
}
