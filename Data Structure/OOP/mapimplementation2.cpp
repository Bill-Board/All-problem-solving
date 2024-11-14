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

template<typename K, typename V>
class interval_map {
	friend void IntervalMapTest();
	V m_valBegin;
	map<K,V> m_map;
public:
	// constructor associates whole range of K with val
	interval_map(V const& val) : m_valBegin(val)
	{}



	void operator==(K const &a, V const &b, K const &c, V const &d){
        m_map[a] = b;
    }




	void assign( K const& keyBegin, K const& keyEnd, V const& val ) {
	    if (!(keyBegin < keyEnd) || val == m_valBegin) {
            return;
        }
        // Insert the new value into the map
        auto itEnd = m_map.upper_bound(keyEnd);
        auto itBegin = m_map.upper_bound(keyBegin);
        if (itBegin != m_map.begin() && (--itBegin)->second == val) {
            // The previous value in the map is the same as the new value, so we don't need to insert a new pair
            return;
        } else {
            m_map.erase(itBegin, itEnd);
            m_map.emplace_hint(itBegin, keyBegin, val);
        }
	}

	// look-up of the value associated with key
	V const& operator[]( K const& key ) const {
		auto it=m_map.upper_bound(key);
		if(it==m_map.begin()) {
			return m_valBegin;
		} else {
			return (--it)->second;
		}
	}friend std::ostream& operator<<(std::ostream& os, const interval_map<K, V>& obj) {
        os << "m_valBegin: " << obj.m_valBegin << "\n";
        os << "m_map:\n";
        for (const auto& pair : obj.m_map) {
            os << "[" << pair.first << ", " << pair.second << ")\n";
        }
        return os;
    }
};

void solve(int tc)
{
    interval_map<int, int> myMap(14);
    myMap == {(1,2),(3,4)};
    cout << myMap << '\n';
    vector
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
