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
    std::map<K,V> m_map;
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
    void assign(K const& keyBegin, K const& keyEnd, V const& val) {
        // check if interval is empty
        if (!(keyBegin < keyEnd)) {
            return;
        }
        // find the first element not less than keyBegin
        auto itBegin = m_map.lower_bound(keyBegin);
        // find the first element greater than or equal to keyEnd
        auto itEnd = m_map.lower_bound(keyEnd);
        // check if there is a previous element that overlaps with the interval
        if (itBegin != m_map.begin()) {
            auto itPrev = std::prev(itBegin);
            // if the previous element's value is equal to val, erase it
            if (itPrev->second == val) {
                itBegin = itPrev;
            }
            // if the previous element's value is greater than val, split it
            else if (itPrev->second > val) {
                m_map.insert({keyBegin, val});
                m_map.insert({itPrev->first, itPrev->second});
                itBegin = std::prev(m_map.lower_bound(keyBegin));
            }
        }
        // remove all elements in the interval [itBegin, itEnd)
        m_map.erase(itBegin, itEnd);
        // insert the new element
        m_map.insert({keyBegin, val});
    }

    // look-up of the value associated with key
    V const& operator[](K const& key) const {
        auto it = m_map.upper_bound(key);
        if (it == m_map.begin()) {
            return m_valBegin;
        } else {
            return (--it)->second;
        }
    }
    friend std::ostream& operator<<(std::ostream& os, const interval_map<K, V>& obj) {
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
    interval_map<int, string> myMap("default");
    myMap.assign(0, 5, "abc");
    myMap.assign(5, 10, "def");
    cout << myMap << '\n';
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
