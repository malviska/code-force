#include<iostream>
using namespace std;

int main  ()
{
	int t;
	cin >> t;
	int a[t*t], b[t];
	for(int i = 0; i<t; i++){
		cin>> a[i]>> a[i+1];
		b[i] =(a[i+1] - a[i]%a[i+1] == a[i+1] ) ? 0 :  a[i+1] - a[i]%a[i+1]; 
	}
	for(int i = 0; i<t; i++){
		cout<<b[i]<<endl;
	}
	return 0;
		
}
