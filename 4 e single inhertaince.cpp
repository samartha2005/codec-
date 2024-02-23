#include<iostream>
using namespace std;
class base{
public:
	int x;
void getdata()
{
cout<<" \n Enter the value of x= ";
cin>>x;
}
};
class derive:public  base{
private:
int y;
public:
void readdata()
{
cout<<"\n Enter the value of y= ";
cin>>y;
}
void product()
{
cout<<"Product : "<<x*y;
}
};
int main()
{
derive a;
a.getdata();
a.readdata();
a.product();
return 0;
}
