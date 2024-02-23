#include<iostream>
using namespace std;
class A{
public:
	int x, y;
void getdata()
{
cout<<"Enter value of x and y: ";
cin>>x>>y;
}
};
class B:public A{
public:
	void product()
{
cout<<"Product is: "<<x*y<<"\n";
}
};
class C:public A{
public:
	void sum()
{
cout<<"Sum is: "<<x+y<<"\n";
}
};
int main()
{
B obj1;
C obj2;
obj1.getdata();
obj1.product();
obj2.getdata();
obj2.sum();
}
