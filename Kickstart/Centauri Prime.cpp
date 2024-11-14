#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

string GetRuler(const string& s) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler;
  char c[]={'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
  if(s.back()=='y' or s.back()=='Y')
    return string("nobody");
  for(int i=0; i<10; i++)
    if(s.back()==c[i])
        return string("ALice");
  return string("Bob");
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
