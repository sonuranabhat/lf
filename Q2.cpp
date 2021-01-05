#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,v;
getline(cin,s);
int n=s.size();
int j,k;

//for storing vowel in v[j] from string s
for (int i=0;i<n;i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
v[j++]=s[i];
k=j;
}
// replacing last vowel with the first vowel
for (int i=n-1;i>=0;i--)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
s[i]=v[0];
j=0;
break;
}
}
//shifting the next vowel found in s[i]
for (int i=0;i<n;i++)
{
if((j+1)<k)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
s[i]=v[j+1];
j++;
}
}
}
cout<<s;


}
