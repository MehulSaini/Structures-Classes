#include <iostream>
using namespace std;
class Cuboid
{
    public:
        double height = 1.0;
        double length = 1.0;
        double width = 1.0;
    double Vol()
{
    double vol = length*height*width;
    return vol;
}
};
int main()
{
    Cuboid c1;
    cout<<"Enter height,length and width of the cuboid: "<<endl;
    cin>>c1.height;
    cin>>c1.length;
    cin>>c1.width;
    cout<<"The volume of cuboid is: "<<c1.Vol()<<endl;
    return 0;
}