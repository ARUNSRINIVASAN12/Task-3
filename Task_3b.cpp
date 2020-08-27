#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<long long int> v(m);
	
	for(int i=0;i<m;i++)
	{
		cin>>v[i];
	}
	
	multiset<int> s;
	
	sort(v.begin(),v.end());
	
	for(int i=m-1;i>m-n-1;i--)
	{
		s.insert(v[i]);
	}
	
	for(int i=m-n-1;i>=0;i--)
	{
		long long int x=*s.begin();
		s.erase(s.begin());
		x+=v[i];
		s.insert(x);
	}
	
	cout<<(*(s.begin()));
	
	return 0;
}

/* This is based on the fact that we sort the array and we take largest n elements into consideration 
 and add a largest element of the remaining array to the smallest array of n elements.
 we repeat this process untill there is no element in the remaining array.
 And finally print the smallest element of n elements.*/

