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
	
	int freq[256]={0};
	
	for(int i=0;i<n;i++)
	{
		char ch=a[i];
		freq[ch]++;
	}
	
	for(int j=0;j<m;j++)
	{
		char ch=b[j];
		freq[ch]--;
	}
	
	for(int k=0;k<256;k++)
	{
		if(freq[k]!=0)
		{
			return false;
		}
	}
	
	return true;
}



int main()
{
	string a="abcd";
	string b="cabd";
	
	cout<<isPermutation(a,b)<<endl;
	
}
