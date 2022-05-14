#include<iostream>
using namespace std;

int main  ()
{
	int t,a,b;
	int *p1;
	cin >> t;
	p1 = new int [t];
	for(int i = 0; i<t; i++){
		cin>> a>> b;
		p1[i] = (b - a%b == b) ? 0 : (b-a%b);
		}
	for(int i = 0; i<t; i++){
		cout<<p1[i]<<endl;
	}
	delete[] p1;
	return 0;
}
