#include<bits/stdc++.h>
using namespace std;
//vector<int>parent;
//vector<int>sizee;
#define m 10005

int parent[m-1]={0};
int sizee[m-1]={0};

void initialize(int n)
{
    for(int j=1;j<=n;j++)
    {
        parent[j]=j;
        sizee[j]=1;
    }



}
int root(int x)
{
    while(x!=parent[x])
    {
        x=parent[x];
    }return x;
}
void unionkorbo(int y,int z)
{
    int po=root(y);
    int pt=root(z);//cout<<po<<" "<<pt<<endl;
    if(po==pt)return;
    else
    {
        if(sizee[pt]>sizee[po])
        {
            parent[po]=parent[pt];
            sizee[pt]+=sizee[po];

        }
        else{
            parent[pt]=parent[po];
            sizee[po]+=sizee[pt];
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
  // char line[100000];
  string s;
    char cc;
            int c1,c2;
   while(t--)
    {
        int i;
        scanf("%d\n\n",&i);

        int success=0,unsuccess=0;
        initialize(i);
      // for(int h=1;h<=i;h++)cout<<parent[h]<<" "<<sizee[h]<<endl;


			while(1){
            if(!getline(cin,s) || s.empty()) break;
            sscanf(s.c_str(),"%c %d %d",&cc,&c1,&c2);
			//sscanf(line, "%c %d %d", &cc, &c1, &c2);
                if(cc =='c')unionkorbo(c1,c2);
                else if(cc =='q')
                {
                    int p1=root(c1);
                    int p2=root(c2);//cout<<p1<<" "<<p2<<endl;
                    if(p1==p2) ++success;
                    else  ++unsuccess;
                }


        }
       printf("%d,%d",success,unsuccess);
      if(t>0)cout<<endl<<endl;
      else cout<<endl;
         memset(parent,0,sizeof(parent));
        memset(sizee,0,sizeof(sizee));
    }
}


