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
    Cuboid() //constructor
    {
        cout<<"Enter height,length and width of the cuboid: "<<endl;
            cin>>height;
            cin>>length;
            cin>>width;
    }
    ~Cuboid()
    {
        cout<<"Destructor"<<endl;
    }
    void update() //setter
    {
        cin>>height;
    }
    double h() //getter
    {
        return height;
    }
    double l() //getter
    {
        return length;
    }
    double w() //getter
    {
        return width;
    }
    private:
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
    double Height=c1.h();
    double Width=c1.w();
    double Length=c1.l();
    cout<<"Volume where h="<<Height<<" l="<<Length<<" w="<<Width<<" is: "<<c1.Vol()<<endl;
    cout<<"Enter new height:"<<endl;
    c1.update();
    Height=c1.h();
    cout<<"New volume where h="<<Height<<" l="<<Length<<" w="<<Width<<" is: "<<c1.Vol()<<endl;
    return 0;
}