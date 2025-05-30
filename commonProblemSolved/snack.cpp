#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<conio.h>
#include<cstdio>
using namespace std;
char a[10000]=" ";
char b[100000]="";
int n=20;
void display();
void display2();
int main()
{
    while(1)
    {
        display2();
        display();
    }
    return 0;
}
void display()
{
    system("cls");
    strcat(b,a);
    cout<<b;
    cout<<"______";
     getch();
}
void display2()
{
    //system("cls");
    cout<< "\n\n\n\n\n\n\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n+10);j++)
            printf(" ");
        for(int j=1;j<=n;j++){

            if(i==1 || i==n || j==1 || j==n)
                        printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
