/*
Sample Input 1
Take what you can, give nothing back.
Sample Output 1:
akeTarg hatwarg ouyarg ancarg, ivegarg othingnarg ackbarg
Note:
• Punctuations should remain at the end of the word even after translation. Assume that punctuations won't appear other than end of the word. Punctuations to be considered are ....?!
. There could be multiple punctuations present (eg: Yes!!)
//non continuous single special charater
Take? what! you can, give nothing back. 
akeTarg? hatwarg! ouyarg ancarg, ivegarg othingnarg ackbarg.
*/
//non continuous single special charater
#include<iostream>
using namespace std;
int main()
{ 
	string s,s1,s2,temp;
	int flag=0;
	char c=' ';
	getline(cin,s);
	int n=s.size();
	
	for(int i=0;i<n;i++) 
	{
		if((s[i]!=c))
		{
			s1+=s[i];
		}
		else
		{
		c=s1[0];
		s1.erase(s1.begin());
		int m=s1.size();	
		for(int j=0;j<m;j++)
		{
		if(s1[j]==','||s1[j]=='?'||s1[j]==';'||s1[j]=='!')
			{
			temp=s1[j];
			s1.erase(s1.begin()+j);
			s1+=c;
			flag++;
			break;			
			}
		}
		if(flag!=0)
		{
			s2+=(s1+"arg"+temp+" ");
			s1.clear();
			c=' ';
			flag=0;
		}
		else
		{
			s1+=c;
			s2+=(s1+"arg ");
			s1.clear();
			c=' ';
			flag=0;
		}
		}
	}
		c=s1[0];
		s1.erase(s1.begin());
		int m=s1.size();	
		for(int j=0;j<m;j++)
		{
		if(s1[j]==','||s1[j]=='?'||s1[j]==';'||s1[j]=='!')
			{
			temp=s1[j];
			s1.erase(s1.begin()+j);
			s1+=c;
			flag++;
			break;			
			}
		}
		if(flag!=0)
		{
			s2+=(s1+"arg"+temp+" ");
		}
		else
		{
			s1+=c;
			s2+=(s1+"arg ");
		}
	
	cout<<s2<<endl;
	
}