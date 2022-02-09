#include<iostream>
using namespace std;
class Box{
	private:
	int length;
	public:
	Box():length(0){}
	friend int len(Box);
};
int len(Box b){
	b.length += 10;
	return b.length;
}
int main(){
	Box b;
	cout<<"Length of box:"<<len(b)<<endl;
	return 0;
}
