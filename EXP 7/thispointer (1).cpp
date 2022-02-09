#include<iostream>
using namespace std;
class employee{
	public:
	int id;
	string name;
	float salary;
	employee(int id, string name, float salary){
		this -> id = id;
		this -> name = name;
		this -> salary = salary;
	}
	void display(){
		cout<<id<<" "<<name<<" "<<salary<<endl;
	}
};
int main(void){
	employee e1 = employee(101, "poornika", 80000);
	employee e2 = employee(102, "Anvitha", 90000);
	e1.display();
	e2.display();
	return 0;
}

