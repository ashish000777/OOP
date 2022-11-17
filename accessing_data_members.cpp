//Accessing data members

#include<iostream>
using namespace std;
class DM{
	public:
		string s1;
		void print()
		{
			cout<<"Name: "<<s1;
		}
};

int main()
{
	DM dm;
	dm.s1 = "Ashish";
	dm.print();
	return 0;
}
