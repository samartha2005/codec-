#include<iostream>
using namespace std;
class student_detail{
protected:
	int rno,sum,i,marks[5];
public:
	void detail()
{
cout<<"Enter the Roll No: "<<endl;
cin>>rno;
cout<<"Enter the marks of 5 subjects:"<<endl;
for(i=0;i<5;i++)
{
cin>>marks[i];
}
sum =0;
for(i=0;i<5;i++)
{
sum = sum + marks[i];
}
}
};
class sports_marks{
protected:
	int s_mark;
public:
	void getMark()
{
cout<<"\n Enter the sports marks: ";
cin>>s_mark;
}
};
class result: public student_detail, public sports_marks{
int tot;
float avg;
public:
	void disp()
{
tot = sum + s_mark;
avg = tot/6.0f;
cout<<"\n \n \tRoll No: "<<rno<<"\n \t Total: "<<tot<<endl;
cout<<"\n \t Average marks: "<<avg;
}
};
int main()
{
result obj;
obj.detail();
obj.getMark();
obj.disp();
}
