// Isogram
#include<iostream>
#include<algorithm>
using namespace std;
string isIsogram(string s1)
{
	int len = s1.length();
	for(int i=0; i<len; i++)
	{
		s1[i] = tolower(s1[i]);
	}
	sort(s1.begin(), s1.end());
	for(int i=0; i<len; i++)
	{
		if(s1[i] == s1[i+1])
			return "0";
	}
	return "1";
}

int main()
{
	string s1 = "Ashish";
	cout<<isIsogram(s1)<<endl;
	return 0;
}
