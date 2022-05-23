    #include<iostream>
    #include<list>
    using namespace std;
     
     
    int fun(list<int>*, int);
    int main ()
    {
    	int k, m;
    	cin>>k;
    	while(k>0)
    	{
    		cin>>m;
    		list<int> * ptr;
    		ptr = new list<int>[m];
    		for(int i = 0; i <m; i++){
    			int val;
    			cin>>val;
    			ptr->push_front(val);
    		}
    		cout<<fun(ptr, m)<<endl;
    		delete [] ptr;
    		k--;
    	}
    }
     
    int fun(list<int>* ptr,int  m){
    	list<int>::iterator it, itr;
    	int days = 0;
    	it = ptr->begin();
    	itr = ptr->begin();
    	do{
    		for(int i  = 0; i<ptr->size(); i++){
    			advance(itr, i);
    			if(*itr>*it){
    				days++;
    				ptr->erase(itr);
    				i--;
    				}
    				itr = ptr->begin();
    			}
    		it++;
    		ptr->pop_front();
    		itr = ptr->begin();
    	}while(it != ptr->end());
    	return days;
    }
