#include<iostream>
using namespace std;
#define PI 3.14
class circle{
	float radius;
	public:
	int area();
};
int circle::area(){
	radius = 20;
	return PI * radius * radius;
}
int num = 100;
int main(){
	circle c;
	int num = 500;
	std::cout<<num<<std::endl;
	std::cout<<::num<<std::endl;
	std::cout<<"Area:"<<c.area()<<std::endl;
	return 0;
}
