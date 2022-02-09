#include<iostream>
using namespace std;
class employee{
	string name;
	int id, basic;
	float DA, IT, net_salary;
	public:
	void get_details(){
		cout<<"Enter details:"<<endl;
		cin>>name>>id>>basic;
	}
	void print_details(){
		DA = 0.52 * basic;
		IT = 0.03 * (basic + DA);
		net_salary = basic + DA - IT;
		cout<<"Name of the employee is"<<name<<endl;
		cout<<"ID is"<<id<<endl;
		cout<<"Basic salary is"<<basic<<endl;
		cout<<"DA is"<<DA<<endl;
		cout<<"IT is"<<IT<<endl;
		cout<<"Net salary is"<<net_salary<<endl;
	}
};
int main(){
 	employee e[3];
	int i;
	for(i=0; i<3; i++){
		e[i].get_details();
	}  
	for(i=0; i<3; i++){
		e[i].print_details();
	} 
	return 0;
} 

