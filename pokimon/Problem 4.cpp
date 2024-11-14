#include<bits/stdc++.h>
using namespace std;

bool check_is_it_day(string s)
{
    if(s.size() !=10)
        return false;
    int cnt_kolon = 0;
    for(int i = 0; i<10; i++)
        if(s[i]=='-')
            cnt_kolon++;
    if(cnt_kolon != 2 or s[2]!= '-' or s[5] != '-' )
        return false;
    int date = 0, month = 0, year = 0;
    for(int i = 0; i<10; i++){
        if(s[i]=='-')
            continue;
        if(i<2)
            date = (date * 10) + (s[i] - '0') ;
        else if(i<5)
            month = (month * 10) + (s[i] - '0') ;
        else
            year = (year * 10) + (s[i] - '0') ;
    }

    if(year < 2013 or 2015 < year)
        return false;
    if(month < 1 or 12 < month)
        return false;

    if(month ==1 or month ==3 or month ==5 or month ==7 or month ==8 or month ==10 or month ==12){
        if(1 <= date and date <= 31)
            return true;
        else
            return false;
    }
    else if(month ==4 or month ==6 or month ==9 or month ==11){
        if(1 <= date and date <= 30)
            return true;
        else
            return false;
    }
    else if(1 <= date and date <= 28){ /// fabruary month
        return true;
    }
    else
        return false;
}

int main()
{
    string input;
    cin >> input;
    int n = input.size();
    map<string, int > maximum_string;
    for(int i = 0; i<n; i++){
        string s = input.substr(i, 10);
        if(check_is_it_day(s))
            maximum_string [s] ++;
    }
    string answer;
    int maximum_time_occure = 0;
    for(auto i: maximum_string)
    {
        if(maximum_time_occure < i.second)
        {
            maximum_time_occure = i.second;
            answer = i.first;
        }
    }
    cout << answer << '\n';

    return 0;
}



///  Alhamdulillah...
