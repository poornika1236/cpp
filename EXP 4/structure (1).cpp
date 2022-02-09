include<iostream>
using namespace std;
struct student{
	string name;
	int rollno;
	int marks;
};
int main(){
	student s;
	cout<<"Enter name of the student:"<<endl;
	cin>>s.name;
	cout<<"Enter rollno:"<<endl;
	cin>>s.rollno;
	cout<<"Enter marks:"<<endl;
	cin>>s.marks;
	return 0;
}
