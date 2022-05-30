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
	int tests;cin>>tests;
	for(int k = 0; k<tests; k++){
		int control = 0;
		string a, b, c;
		cin>>a>>b>>c;
		string::iterator itA,itB;
		itA = a.begin();
		itB = b.begin();
		for(auto i: c){
			if(i != *itA && i != *itB){
				control++;
				break;
			}
			itA++;
			itB++;
		}
		switch(control){
			case 0:
				cout<<"YES"<<endl;
				break;
			default:
				cout<<"NO"<<endl;
				break;
		}
	}
	return 0;
}
