#include<iostream>
using namespace std;
class A{
public:
	A()
{
int a=5,b=6,c;
c = a + b;
cout<<"Sum is: "<<c<<endl;
}
};
class B:public A{
public:
	B()
{
int d = 50,e = 35,f;
f = d - e;
cout<<"Difference  is: "<<f<<endl;
}
};
class C:public B{
public:
	C()
{
int g = 10,h = 20,i;
i = g * h;
cout<<"Product is: "<<i<<endl;
}
};
int main()
{
	C obj;
}
