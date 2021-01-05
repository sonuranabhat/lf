#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	cin>>str1;
	cin>>str2;
	for(int i=0;i<str1.size();i++)
	{
		for(int j=0;j<str2.size();j++)
		{
			if((str1[i]==str2[j]))
			{
				if((str1[i++])==str2[j++])
				{
					cout<<"match"<<i<<j<<endl;
				}
				else
				{
				cout<<str1[i]<<endl;
				cout<<str2[j]<<endl;
				}
			}
		}
	}
}
