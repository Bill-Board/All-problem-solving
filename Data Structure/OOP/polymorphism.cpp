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


class A {
public:
  virtual void print() {
    cout << "Parent Class" << endl;
  }
};



class B : public A{
public:
  void print() {
    cout << "Child Class" << endl;
  }
};


class Animal {
public:
  virtual void Sound() = 0;// {
//    cout << "Animal Sound" << endl;
//  }
};



class Dog : public Animal {
public:
  void Sound() {
    cout << "woof" << endl;
  }
};

class Cat : public Animal {
public:
  void Sound() {
    cout << "meaow" << endl;
  }
};

void solve(int tc){
//    Animal *animal = new Animal();
//    Dog *dog = new Dog();
//    animal->Sound();
//    dog->Sound();
    /// virtual function
//    Animal* dog = new Dog();
//    dog->Sound();
    /// pure virtual function
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    dog->Sound();
    cat->Sound();
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
