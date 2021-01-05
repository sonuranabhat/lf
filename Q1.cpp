//Q1.Write a program that takes a string as an input and produces the array of numbers in the 
//string in the order of occurence such that any adjacent digits are added before being inserted 
//into the array. If the digits are separated by any character, then they are not considered adjacent.
// Digits that don't have adjacent digits should be inserted into array as it is. If there are no digits 
//present in the string. then the array should contain a single element - 0.
//
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
string str;
cin>>str;
int n=str.size();
vector<int>v;
int temp=0;
for(int i=0;i<n+1;i++)
{
 if(isdigit(str[i]))
 {
  char x=str[i];
  int p;
  p=(int)x;
  p=p-48;
  temp=temp+p;
 }
 else
 {
  if(temp!=0)
  {
   v.push_back(temp);
   temp=0;
  }
 }
}
int n1=v.size();
for(int j=0;j<n1;j++)
{
 cout<<v[j]<<"";
}
return 0;
}
