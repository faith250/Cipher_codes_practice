//implementing Caesar cipher
//basic concept ASCII VALUES
// the way we can extract ascii values in c++ is 
//simply by assigning the value to an integer variable 
//type casting is not needed
//ASCII-UPPERCASE-A=65 TO Z=90
//lowercase a=97 to =122
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="aastha";
	int fs;
	int n;
	cout<<"enter the digit you want the number to shift by"<<endl;
	cin>>n;
	for(int i=0;i<s.length();i++)
	{
		//checking for uppercase and lowercase
		if(s[i]>='a' &&s[i]<='z')
		{
			s[i]=((s[i]-'a'+n)%26)+'a';

		}
		else
		{
			if(s[i]>='A' && s[i]<='Z')
			{
				s[i]=((s[i]-'A'+n)%26)+'A';

			}
		}
	}
	cout<<s<<endl;
	for(int i=0;i<s.length();i++)
	{
		//checking for uppercase and lowercase
		if(s[i]>='a' &&s[i]<='z')
		{
			s[i]=((s[i]-'a'-n)%26)+'a';

		}
		else
		{
			if(s[i]>='A' && s[i]<='Z')
			{
				s[i]=((s[i]-'A'-n)%26)+'A';

			}
		}
	}
	
	cout<<s<<endl;

	
	
}