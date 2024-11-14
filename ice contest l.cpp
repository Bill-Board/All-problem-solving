#include<bits/stdc++.h>
using namespace std;

int main(){

    float arr[1000];

    long long int i=0, a,j;


    while(1){
        cin>>a;

        arr[i]=sqrt(a);
        i++;
        if(i==4)
            break;

    }
    for(j=i-1; j>=0; j--){
        printf("%.6f\n",arr[j]);
    }

    return 0;
}
