#include<iostream>
using namespace std;
class Base{
public:
	void display()
{
	cout<<"Display Base: "<<endl;
} 
virtual void show()
{
	cout<<"Show Base: "<<endl;
}
};
class Derived: public Base{
public:
	void display()
{
	cout<<"Display Derived: "<<endl;
}
void show()
{
	cout<<"Show Derived: "<<endl;
}
};
int main()
{
Base b;
Derived d;
Base *bptr;
cout<<"bptr points to Base."<<endl;
bptr = &b;
bptr ->display();
bptr ->show();
cout<<"bptr points to Derived."<<endl;
bptr = &d;
bptr ->display();
bptr ->show();
return 0;
}
