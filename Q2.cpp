/*Q2.Replace all vowels in the sentence with the next closest vowel in the sentence itself. 
The last vowel should be replaced by the first vowel in the sentence.
Example
Sample Input 1: Hello World
Sample output 1 Hollo Werld
*/ 
//its in reverse not shifting
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,vowel;
getline(cin,s);
int n=s.size();
int j;
for (int i=0;i<n;i++)
{
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
 vowel[j++]=s[i];
}
for (int i=0;i<n;i++)
{
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
 s[i]=vowel[--j];
}
cout<<s;

}
