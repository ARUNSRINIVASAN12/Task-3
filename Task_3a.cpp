#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int y=0;
	
	while(s.length()!=1)
	{
		int x=0;
		
		for(int j=0;j<s.length();j++)
		{
			x+=s[j]-48;
		}
		
		s=to_string(x);   //to_string is included in "string" library. It converts number x into a string.
		y+=1;
	}
	
	cout<<y;
	
	return 0;
}

//This is simply running step by step procedure of what is given in the qustion.
