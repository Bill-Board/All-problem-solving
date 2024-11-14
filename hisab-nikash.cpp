//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Sequence Containers : vector,deque,list....
#define vc    vector<char>
#define vi    vector<int>
#define vs    vector<string>
#define dqi   deque<int>
#define dqc   deque<char>
#define lii   list<int>
#define lic   list<char>
#define pb    push_back
#define pf    push_front
#define pff() pop_front()
#define pbb() pop_back()

//Container Adaptors : queue,priority_queue, stack....
#define sti   stack<int>
#define stc   stack<char>

//Associative Containers : map,set....
#define mpll  map<long long ,long long>
#define mps   map<string,string>
#define si    set<int>
#define sc    set<char>
#define msi   multiset<int>

#define ses   "\n"
#define whp   " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n;cin>>n;
    string a;cin>>a;
    int len=a.size();
    if(n==6)cout<<"espeon\n";
    else if(n==8)cout<<"vaporeon\n";
    else /// Jolteon\n, Flareon\n, Umbreon\n, Leafeon\n, Glaceon\n, and Sylveon\n.
    {
        for(int i=0;i<n-3;i++)
        {
            //cout<<a[i]<<ses;
            if(a[i]=='.')continue;
            if(i==0)
            {
                if(a[i]=='j'){cout<<"jolteon\n";break;}
                else if(a[i]=='f'){cout<<"flareon\n";break;}
                else if(a[i]=='u'){cout<<"umbreon\n";break;}
                else if(a[i]=='l'){cout<<"leafeon\n";break;}
                else if(a[i]=='g'){cout<<"glaceon\n";break;}
                else if(a[i]=='s'){cout<<"sylveon\n";break;}
            }
            else if(i==1)/// Jolteon\n, Flareon\n, Umbreon\n, Leafeon\n, Glaceon\n, and Sylveon\n.
            {
                if(a[i]=='o'){cout<<"jolteon\n";break;}
                else if(a[i]=='l')
                {
                    if(a[i-1]=='f'|| a[i+2]=='r')cout<<"flareon\n";
                    else cout<<"glaceon\n";
                    break;
                }
                else if(a[i]=='m'){cout<<"umbreon\n";break;}
                else if(a[i]=='e'){cout<<"leafeon\n";break;}
                else if(a[i]=='y'){cout<<"sylveon\n";break;}
            }




            else if(i==2)/// Jolteon\n, Flareon\n, Umbreon\n, Leafeon\n, Glaceon\n, and Sylveon\n.
            {
                if(a[i]=='b'){cout<<"umbreon\n";break;}
                else if(a[i]=='l'){
                    if(a[i+1]=='t' || a[i-1]=='o' || a[i-2]=='j')
                     cout<<"jolteon\n";
                    else cout<<"sylveon\n";
                    break;
                }
                else if(a[i]=='a')
                {
                    if(a[i+1]=='f' || a[i-1]=='e' || a[i-2]=='l')
                        cout<<"leafeon\n";
                    else{
                        if(a[i-1]=='f'|| a[i+1]=='r')cout<<"flareon\n";
                        else cout<<"glaceon\n";
                    }
                    break;
                }


            }


            else/// Jolteon\n, Flareon\n, Umbreon\n, Leafeon\n, Glaceon\n, and Sylveon\n.
            {

                if(a[i]=='t'){cout<<"jolteon\n";break;}
                else if(a[i]=='r')
                {
                    if(a[i-1]=='a' || a[i-2]=='l' || a[i-3]=='f')
                    cout<<"flareon\n";
                    else cout<<"umbreon\n";
                    break;
                }
                else if(a[i]=='f'){cout<<"leafeon\n";break;}
                else if(a[i]=='c'){cout<<"glaceon\n";break;}
                else if(a[i]=='v'){cout<<"sylveon\n";break;}
            }

        }
    }
    return 0;
}


