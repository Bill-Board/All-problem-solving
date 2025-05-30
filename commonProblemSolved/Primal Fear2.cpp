
#include <iostream>
#include <cstdio>
#include <cmath>
#include <queue>
#include <vector>
#include <algorithm>
#define SIZE 1000000
#define MAX_SIZE 671

using namespace std;

bool prime[SIZE];
int validPrimes[MAX_SIZE], idx = 0;

void preparePrimes(){
	fill(prime, prime + SIZE, true);
	prime[1] = false;
	for(int i=3;i<=1000;i++){
		if(prime[i]){
			for(int j=i*i;j<SIZE;j+=(i<<1))
				prime[j] = false;
		}
	}
	cout<<"ok "<<endl;
}


int pw(int a, int b)
{
	int ans = 1;
	for(int i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
void findValidPrimes(){
	validPrimes[idx++] = 2;
	validPrimes[idx++] = 5;
	queue<pair<int,int> > q;
	q.push({3,1});
	q.push({7,1});
	while(!q.empty()){
		int x = q.front().first;
		int len = q.front().second;
		q.pop();
		validPrimes[idx++] = x;
		if(len == 6)
			continue;
		for(int i=1;i<10;i++){
			int y = i*pw(10,len)+x;
			if(prime[y]){
				q.push({y,len + 1});
			}
		}
	}
}

int main(){
	preparePrimes();
	findValidPrimes();
	sort(validPrimes, validPrimes + MAX_SIZE);
	for(int i=0;i<MAX_SIZE;i++)cout<<validPrimes[i]<<" ";cout<<endl;;
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int position = upper_bound(validPrimes, validPrimes + MAX_SIZE, n) - validPrimes;
		printf("%d\n", position);
	}
	return 0;
}
