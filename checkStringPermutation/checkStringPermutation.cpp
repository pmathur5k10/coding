#include<iostream>
#include<string>
using namespace std;



bool isPermutation( string a, string b)
{
	if(a=="" && b=="")
	{
		return true;
	}
	
	if (a=="" || b=="")
	{
		return false;
	}
	
	int n=a.size();
	int m=b.size();
	
	bool check[m];
	
	for( int i=0;i<m;i++)
	{
		check[i]=false;
	}
	
	for(int i=0;i<n;i++)
	{
		bool found=false;
		
		for(int j=0;j<m;j++)
		{
			if(check[j]==false && a[i]==b[j])
			{
				found=true;
				check[j]=true;
				continue;
			}
		}
		
		if(found=false)
		{
			return false;
		}
	}
	
	for(int j=0;j<m;j++)
	{
		if(check[j]==false)
		{
			return false;
			
		}
	}
	
	return true;
}



int main()
{
	string a="";
	string b="cab";
	
	cout<<isPermutation(a,b)<<endl;
	
}
