/**3 3
1 1 1
1 2 1
2 3 2
3 1 3*/
#include<iostream>
using namespace std;
int main()
{
    int B, N, D, C, V, q, R[100];
    while(cin>>B>>N)
        {
            if(B==0 && N==0)
                return 0;
            q=0;
            for(int i=0;i<B;i++)
                cin>>R[i];
            for(int i=0;i<N;i++)
            {
                cin>>D>>C>>V;
                R[D-1]=R[D-1]-V;
                R[C-1]=R[C-1]+V;
            }
            for(int i=0;i<B;i++)
                {
                    if(R[i]<0){
                        cout<<"N"<<endl;q=1;break;
                        }
                }
            if(q==0)
                cout<<"S"<<endl;
        }
}
