// Member functions
#include<iostream>
using namespace std;
class geeks{
	public:
		int id;
		string name;
		void printName();
		void printId()
		{
			cout<<"Id: "<<id;
		}
};

void geeks :: printName()
{
	cout<<"Name: "<<name;
}

int main()
{
	geeks obj1;
	obj1.id = 20;
	obj1.printId();
	cout<<endl;
	obj1.name = "Ashish";
	obj1.printName();
	return 0;
}
