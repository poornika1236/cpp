#include<iostream>
using namespace std;
class student{
	string name;
	int rollno;
	int marks;
	public:
	void read(int count){
		cout<<"Enter details:"<<count+1<<endl;
		cin>>name>>rollno>>marks;
	}
	void display(int count){
		cout<<"The details are:"<<endl;
		cout<<"Enter name:"<<name<<endl;
		cout<<"Enter rollno:"<<rollno<<endl;
		cout<<"Enter marks:"<<marks<<endl;
	}
};
int main(){
	student s[3];
	int i;
	for(i=0; i<3; i++){
		s[i].read(i);
	}
	for(i=0; i<3; i++){
		s[i].display(i);
	}
	return 0;
}

