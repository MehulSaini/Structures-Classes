#include <iostream>
using namespace std;
class Cuboid
{
    private:
        double height = 1.0;
        double length = 1.0;
        double width = 1.0;
    public:
    double Vol()
        {
        double vol = length*height*width;
        return vol;
        }
    void input()
        {
            cout<<"Enter height,length and width of the cuboid: "<<endl;
            cin>>height;
            cin>>length;
            cin>>width;
        }
};
int main()
{
    Cuboid c1;
    c1.input();
    cout<<"The volume of cuboid is: "<<c1.Vol()<<endl;
    return 0;
}