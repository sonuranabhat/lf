#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string  s,s1,s2,s3=" ";
	char c=' ';
	getline(cin,s);
	int n=s.size();
	for(int i=0;i<n;i++) 
	{
		if(s[i]!=c)
		{
			s1+=s[i];
		}
		else
		{
			s1+=s3;
			c=s1[0];
			s1.erase(s1.begin());
			s1+=c;
			s2+=(s1+"arg ");
			s1.clear();
			c=' ';
		}
	}
	
	char c1=s1[0];
	s1.erase(s1.begin());
	s1+=s3;
	s1+=c1;
	s2+=(s1+"arg ");
	cout<<s2;
	
}