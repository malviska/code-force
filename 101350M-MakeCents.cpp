#include<bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0)
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF =  0x3f3f3f3f3f3f3f3fll;

int main()
{ _;
	
	int t,C,N;cin>>t;
	double fi,fl, value =0;
	string  c, cr;
	map<string, double> mp;
	mp["JD"] = 1.000000;
	while(t>0){
		cin>>C>>N;
		for(int i = 0 ; i<C; i++){
			cin>>c>>fi;
			mp[c] = fi;
		}
		for(int j = 0; j<N; j++){
			cin>>fl>>cr;
			value+= mp[cr]*fl;
		}
		t--;
	}
	cout<<fixed<<setprecision(6)<<value<<endl;
	return 0;
}
