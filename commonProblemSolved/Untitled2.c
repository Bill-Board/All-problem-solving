#include<stdio.h>
int fun1(int a)
{
int b;
b= fun2(a);
return b;
}
int fun2(int a)
{
    static int b=1;
    b+=1;
    return (b+a);
}
void main()
{
    int a=0,b=1,count;
    for(count=1;count<=5;++count)
    {
        b+=fun1(a)+fun2(a);
        printf("%d ",b);
    }
}
