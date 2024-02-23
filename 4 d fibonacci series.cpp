#include<iostream>
using namespace std;
class fibonacci{
	long int a,b;
public:
	fibonacci()
{
a = -1;
b = 1;
}
void fibseries(int n)
{
	int i, next;
cout<<"\n Resultant fibonacci series: ";
cout<<"\n--------------------------------\n";
for(i=0;i<n;i++)
{
	next = a+b;
cout<<next<<endl;
a=b;
b = next;
}
}
};
int main()
{
fibonacci f;
int n;
cout<<"Fibonacci series \n";
cout<<"Enter the range: ";
cin>>n;
f.fibseries(n);
return 0;	
}
