// Read and understand the following code.
// Provide the correct input to have the program print the sentence: Exactly! Good Job.
// Before submitting your answer, please check its correctness by executing the code

#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <cstdint>
#include<bits/stdc++.h>
using namespace std;
static int64_t green_day[] = { 68053, 56286, 93562, 32510, 80652, 62435 };
static int64_t tgreen_day[] = { 68053, 56286, 93562, 32510, 80652, 62435 };
const static int N = sizeof(green_day)/sizeof(*green_day);

bool ok=false;
static void fail()
{
    ok=true;
    //puts("Nope!");
    //exit(EXIT_FAILURE);
}
static void pink_floyd(int64_t a, int64_t f, int64_t r)
{
    if ( a - r / 7 + 3 * f / 11 )
        fail();
}
static void ac_dc(int k, int64_t d)
{
    int64_t i = d;
    for(; k<N; ++k)
    {
        if ((k % 2) == 0)
            continue;
        i += green_day[k];
    }
    if (i != 152916)
        fail();
}
static void the_rolling_stones(int t, int64_t n)
{
    if (t<N)
    {
        if (t % 2)
            the_rolling_stones(++t, n);
        else
            the_rolling_stones(t + 1, n * green_day[t]);
    }
    else if (n != 769547450)
        fail();
}
int main()
{
    int64_t h, x, v;
    //printf("Please enter the right three numbers: ");
    //fflush(stdout);
    //cin >> h >> x >> v;
//    if (scanf("%" SCNd64 " %" SCNd64 " %" SCNd64, &h, &x, &v) != 3)
//        fail();
    int kot=0;
    for(int i=0;i<(1<<6); i++)
    {
        ok=false;
        vector< int64_t > a;
        for(int j=0;j<6;j++)
        {
            if( i & (1<<j))
                a.push_back(green_day[j]);//, cout << j << " ";

        }//cout <<endl;
        if(a.size()==3)
        {
            sort(a.begin(),a.end());
            do
            {
                ok=false;
                green_day[0] = a[0];
                green_day[5] = a[1];
                green_day[4] = a[2];
                ac_dc(0, 61106);
                the_rolling_stones(1, 5);
                pink_floyd(a[0], a[1], a[2]);
                for(auto p: a)
                    cout << p <<" ";
                cout << endl;
                if(ok==false)
                {
                    for(auto p: a)
                        cout << p <<" ";
                    cout << endl;
                    //puts("Exactly! Good job.");
                }kot++;
                green_day[0]=tgreen_day[0] ;
                green_day[5]=tgreen_day[5] ;
                green_day[4]=tgreen_day[4] ;
            }while(next_permutation(a.begin(), a.end()));

        }

    }//cout << kot <<endl;
}
