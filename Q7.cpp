
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	string str2="[.]";
	int n;
	n=str.length();
	vector<string>v;
	string temp;
	for(int i=0;i<n;i++)
	{
		if(str[i]!='.')
		{
			temp=str[i];
			v.push_back(temp);
		}
		else
		{
			v.push_back(str2);
		}
	}
	int m=v.size();
	for(int j=0;j<n;j++)
	{
	cout<<v[j];
	}
	return 0;
}

