#include<iostream>
using namespace std;
int main ()
				{
				int k, m;
				cin>>k;
				while(k>0)
								{
								cin>>m;
								int * ptr;
								ptr = new int [m];
								for(int i = 0; i <m; i++){
									int val;
									cin>>ptr[i];
								}
								int it = 0, days = 0;
								do{
								for(int i  = it + 1; i<m; i++){
										if(ptr[i]<ptr[it]){
											days++;
											break;
										}
									}
								it++;
								}while(it < m);
								cout<<days<<endl;
								delete [] ptr;
								k--;
								}
				}
