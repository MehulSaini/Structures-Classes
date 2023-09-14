#include <iostream>
using namespace std;
class Rectangle
{
	private:
		double length = 10;
		double width = 20;
	public:
		double area();
};
	double Rectangle::area()
		{
			return length*width;
		}
class Cuboid:public Rectangle
{
	private:
		double height = 30;
	public:
		double volume();
};
double Cuboid::volume()
		{
			return area()*height;
		}
int main()
{
	Rectangle r1;
	Cuboid c1;
	cout<<"Area rect: "<<r1.area()<<endl;
	cout<<"Vol cuboid: "<<c1.volume()<<endl;
	return 0;
}
