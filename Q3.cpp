/*
Sample Input 1
Take what you can, give nothing back.
Sample Output 1:
akeTarg hatwarg ouyarg ancarg, ivegarg othingnarg ackbarg
Note:
• Punctuations should remain at the end of the word even after translation. Assume that punctuations won't appear other than end of the word. Punctuations to be considered are ....?!
. There could be multiple punctuations present (eg: Yes!!)
Take? what! you can, give nothing back. 
akeTarg? hatwarg! ouyarg ancarg, ivegarg othingnarg ackbarg.
*/
//no symbol
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string  s,s1,s2;
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
	s1+=c1;
	s2+=(s1+"arg ");
	cout<<s2;
	
}
