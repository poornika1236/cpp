#include<iostream>
using namespace std;
class student{
	string name;
	int rollno;
	int marks;
	public:
	void read(){
		cout<<"Enter details:"<<endl;
		cin>>name>>rollno>>marks;
	}
	void display(){
		cout<<"Details are:"<<endl;
		cout<<"Enter name:"<<name<<endl;
		cout<<"Enter rollno:"<<rollno<<endl;
		cout<<"Enter marks:"<<marks<<endl;
	}
};
int main(){
	student s;
	student *p;
	p = &s;
	p -> read();
	p -> display();
	return 0;
}
