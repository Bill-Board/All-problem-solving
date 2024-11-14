//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
#include <map>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;



template<typename K, typename V>
class interval_map {
	friend void IntervalMapTest();
	V m_valBegin;
	map<K,V> m_map;
public:
	// constructor associates whole range of K with val
	interval_map(V const& val) : m_valBegin(val)
	{}

	// Assign value val to interval [keyBegin, keyEnd).
	// Overwrite previous values in this interval.
	// Conforming to the C++ Standard Library conventions, the interval
	// includes keyBegin, but excludes keyEnd.
	// If !( keyBegin < keyEnd ), this designates an empty interval,
	// and assign must do nothing.
	void assign(K const& keyBegin, K const& keyEnd, const V& val) {
        auto itBegin = m_map.lower_bound(keyBegin);
        auto itEnd = m_map.upper_bound(keyEnd);
        auto prevIt = std::prev(itBegin);
        if (prevIt != m_map.end() && prevIt->second == val) {
            ++prevIt;
        }
        m_map.erase(itBegin, itEnd);
        m_map.insert(prevIt, std::make_pair(keyBegin, val));
        if (prevIt != m_map.end() && prevIt->second == val) {
            ++prevIt;
        }
        m_map.insert(prevIt, std::make_pair(keyEnd, prevIt->second));
    }

	// look-up of the value associated with key
	V const& operator[]( K const& key ) const {
		auto it=m_map.upper_bound(key);
		if(it==m_map.begin()) {
			return m_valBegin;
		} else {
			return (--it)->second;
		}
	}
};

// Many solutions we receive are incorrect. Consider using a randomized test
// to discover the cases that your implementation does not handle correctly.
// We recommend to implement a test function that tests the functionality of
// the interval_map, for example using a map of int intervals to char.
void solve(int tc)
{
    interval_map <int , int> m(22);
    m.assign(1,3,4);
    cout << m[15] << '\n';
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
