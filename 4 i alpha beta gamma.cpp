#include<iostream>
using namespace std;
class alpha{
int x;
public:
	alpha(int i)
{
x = i;
cout<<"Alpha initialized: "<<"\n";
}
void show_x(void)
{
cout<<"x = "<<x<<"\n";
}
};
class beta{
float y;
public:
	beta(float j)
{
y = j;
cout<<"Beta initialized: "<<"\n";
}
void show_y(void)
{
cout<<"y = "<<y<<"\n";
}
};
class gamma:public beta, public alpha{
int m,n;
public:
	gamma(int a,float b,int c,int d):
	alpha(a), beta(b)
{
m = c, n = d;
cout<<"Gamma initialized: "<<"\n";
}
void show_mn(void)
{
cout<<"m = "<<m<<"\n";
cout<<"n = "<<n<<"\n";
}
};
int main()
{
gamma g(2,10.5,30,40);
g.show_x();
g.show_y();
g.show_mn();
}
