#include <iostream>
using namespace std;
class Rectangle
{
	private:
		double length;
		double width;
	public:
		double area()
		{
			cin>>length;
			cin>>width;
			return length*width;
		}
};
int main()
{
	Rectangle r1;
	cout<<"Enter length and width:"<<endl;
	cout<<"Area: "<<r1.area()<<endl;
	return 0;
}
