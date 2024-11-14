#include<bits/stdc++.h>
using namespace std;

int main()
{
    int locker;
    cin >> locker;
    vector <int> unlock;
    for(int i = 1; i<=locker; i++){
        unlock.push_back(i);
    }
    int pass = 2, answer ;
    while(unlock.size()){
        int visi[unlock.size()+2] ={0};
        for(int i = 0; i < unlock.size(); i+=pass)
            visi[i] = 1, answer = unlock [i];
        vector<int> temp;
        for(int i = 0; i < unlock.size(); i++){
            if(visi[i] == 0)
                temp.push_back(unlock[i]);
        }
        unlock.clear();
        unlock = temp;
        pass ++;
    }

    cout << answer << '\n';

    return 0;
}



///  Alhamdulillah...
