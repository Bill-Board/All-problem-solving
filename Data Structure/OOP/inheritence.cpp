//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

class ytc{
private:
    int subscriber;
    int totalVideos;
    string name;
    vector <string> algebra;
public:
    ytc(string Name) {
    name = Name;
    subscriber = 0;
    totalVideos = 0;
  }
  void subscribe() {
    subscriber++;
  }

  void unsubscribe() {
    subscriber--;
  }

  void addVideoTitle(string videoTitle) {
      totalVideos++;
      algebra.push_back(videoTitle);
  }
  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "Subscriber: " << subscriber << endl;
    cout << "Total Video: " << totalVideos << endl;
    cout << "Videos: " << endl;
    for (string &videoTitle : algebra) {
      cout << videoTitle << endl;
    }
  }
};
class math : public ytc{
public:
    math(string s) : ytc(s){}
};

class pro : public ytc{
public:
    pro(string s) : ytc(s){}
};

void solve(int tc)
{
    math a("akib");
    pro b("ice");
    a.subscribe();
    a.subscribe();
    a.subscribe();
    a.subscribe();
    b.subscribe();
    b.subscribe();
    b.subscribe();

    a.addVideoTitle("1st");
    a.addVideoTitle("2nd");
    a.addVideoTitle("3rd");
    b.addVideoTitle("1st");
    b.addVideoTitle("2nd");
    b.addVideoTitle("3rd");
    b.addVideoTitle("4th");
    a.printInfo();
    b.printInfo();
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
