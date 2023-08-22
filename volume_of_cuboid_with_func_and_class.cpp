#include <iostream>
using namespace std;
class Cuboid
{
    public:
        double height = 1.0;
        double length = 1.0;
        double width = 1.0;
};
Cuboid c1;
double Vol()
{
    double vol = c1.length*c1.height*c1.width;
    return vol;
}
int main()
{
    cout<<"Enter height,length and width of the cuboid: "<<endl;
    cin>>c1.height;
    cin>>c1.length;
    cin>>c1.width;
    cout<<"The volume of cuboid is: "<<Vol()<<endl;
    return 0;
}