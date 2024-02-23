#include<iostream>
using namespace std;
class student{
protected:
	int roll_number;
public:
	void getnumber(int a)
{
roll_number = a;
}
void putnumber(void)
{
cout<<"Roll Number: "<<roll_number<<"\n";
}
};
class test:public student{
protected:
	float part1, part2;
public:
	void getmarks(float x, float y)
{
part1 = x;
part2 = y;
}
void putmarks(void)
{
cout<<"Marks obtained: "<<"\n";
cout<<"part 1 = "<<part1<<"\n";
cout<<"part 2 = "<<part2<<"\n";
}
};
class sports{
protected:
float score;
public:
	void getscore(float s)
{
	score = s;
}
void putscore()
{
cout<<"Sports wt:"<<"\n \n";
}
};
class result:public test, public sports{
	float total;
public:
	void display();
};
void result::display()
{
total = part1 + part2 +score;
putnumber();
putmarks();
putscore();
cout<<"Total Score: "<<total<<"\n";	
}
int main()
{
result s1;
s1.getnumber(1);
s1.getmarks(23.5,34.8);
s1.getscore(6.0);
s1.display();
}
