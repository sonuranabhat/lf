#include<iostream>
using namespace std;
int main()
{
	string name,t1;
	string typed;
	int flag=0;
	int k=0,l=0;
	int rep=0;
	int danger=0;
	cout<<"input= ";
	cin>>name;
	cout<<"typed= ";
	cin>>typed;	
	int n=name.size();
	int t=typed.size();	
		if(name==typed)
			{
				cout<<"All word same(true)";
			}
		else
			{
				for(int i=0;i<n;i++)
					{		
						for(int j=k;j<t;j++)
							{						   				
								if (name[i]==typed[j])
									{
										if(i!=j)
											{				
												flag++;
												k++;
											}
											else
											{
												k++;
											}				
									}
								else if((name[i]!=typed[j])&&flag!=0)
									{
										j=k;
										rep=flag;
										flag=0;
										break;
					
									}									
								else if((name[i]!=typed[j])&&(flag==0))
									{
										l=j-1;
										if((name[i]==typed[l])&&(rep>=2))
										{
											flag=0;
											break;
										}
										else
										{
										danger=1;
										break;
										}
									}
											
							}
					}
			}	
		if(danger==1)
		{
			cout<<"false";
		}
		
		else
		{cout<<"true";
		}
		

}
