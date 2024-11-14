#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<string> input;
    string p;
    for(int i = 0; i<s.size(); i++){
        if(s[i]==' '){
            input.push_back(p);
            p.clear();
        }
        else p+=s[i];
    }

    input.push_back(p);

    string answer;
    int n = input.size(), m = input[0].size();
    /// n = total string, m = per string length
    for(int j = 0; j<m; j++){

        set<char>set_name;

        for(int i = 0; i<n; i++){
            set_name.insert(input[i][j]);
        }

        if(set_name.size()==1)
            answer += input[0][j];
        else
            answer += '?';
    }
    cout << answer << '\n';


    return 0;
}



///  Alhamdulillah...
