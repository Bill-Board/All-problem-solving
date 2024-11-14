#include <stdio.h>
#include<conio.h>
void odd(int num1, int num2)
{
   if(num1>num2)
    return;
    printf("%d ",num1);
   odd(num1+2,num2);
}
void even(int num1, int num2)
{
   if(num1>num2)
    return;
    printf("%d ",num1);
   even(num1+2,num2);
}
int main()
{
    int lowerLimit, upperLimit;


    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("Even Numbers from %d to %d are: ", lowerLimit, upperLimit);
    if(lowerLimit%2==1)even(lowerLimit+1, upperLimit);
    else even(lowerLimit, upperLimit);
    printf("\n");
    printf("odd numbers from %d to %d are: ",lowerLimit,upperLimit);
    if(lowerLimit%2==0)odd(lowerLimit+1,upperLimit);
    else odd(lowerLimit,upperLimit);

    return 0;
}
