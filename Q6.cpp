#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
    char c =' ';
    string word="";
    getline(cin,str);
    int n=str.size();
    for(int i=0;i<n;i++) 
    {
        if (str[i] == c)
        {
        	cout << word<<endl;
            word="";
        }
        else
        {
        	word += str[i];
		}
      
    }
    cout << word;
}

