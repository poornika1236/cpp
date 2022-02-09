#include<iostream>
using namespace std;
class employee{
	string name;
	int id;
	int basic;
	float DA;
	float IT;
	float net_salary;
	public:
	void get_data(){
		cout<<"Enter name of the employee:"<<endl;
		cin>>name;
		cout<<"Enter employee ID:"<<endl;
		cin>>id;
		cout<<"Enter basic salary:"<<endl;
		cin>>basic;
		cout<<"Enter DA:"<<endl;
		cin>>DA;
		cout<<"Enter IT:"<<endl;
		cin>>IT;
	}
	void put_data(){
		cout<<"Name of the employee is"<<name<<endl;
		cout<<"ID is"<<id<<endl;
		cout<<"Basic salary is"<<basic<<endl;
		cout<<"IT is"<<IT<<endl;
		cout<<"DA is "<<DA<<endl;
		cout<<"Net salary is"<<basic+DA<<endl;
	}
};
int main(){
	employee e;
	e.get_data();
	e.put_data();
	return 0;
}
