#include<iostream>
using namespace std;
int main ()
{
	int testCases,a,b,c,d, val,j = 0,val2, val3;
	cin>>testCases;
	int * p;
	p = new int [testCases];
	for(int i = 0; i<testCases;i++)	{
		cin >> a>>b>>c>>d;
		val = a-(c+1);
		val2 = a -(val+1);
		val3  = (val>val2) ? val*b : val2*b;
		val = b-(d+1);
		val2 = b - (val+1);
		val = (val>val2) ? val*a : val2*a;
		p[i] = (val>val3) ? val : val3;
	}
	do{
		cout<< p[j]<< endl;
		j++;
	}while(j<testCases);
	delete[] p;
	return 0;
}
