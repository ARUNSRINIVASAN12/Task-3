#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int func(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	
	return 1;
}

int main()
{
	int n;
	cin>>n;
	
	int x=0;
	
	for(int i=2;i<=n;i++)
	{
		//cout<<sqrt(n)<<"   ";
		x+=func(i);
	}
	
	cout<<(x*(x+1))/2;
	
	return 0;
}

/* This is nothing but to find the number of prime numbers below n , let us consider it as x.
So  , finlly we have to print sigma(x) or x*(x+1)/2.*/
