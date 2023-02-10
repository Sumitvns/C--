#include<iostream>
using namespace std;
class Square
{
    private:
        float len;
    public:
        void getData();
        float findArea();
};
void Square::getData()
{
    cout<<"Enter the Length of Square: ";
    cin>>len;
}
float Square::findArea()
{
    return (len*len);
}

int main()
{
    Square c;
    float area;
    c.getData();
    area = c.findArea();
    cout<<"Area of Square = "<<area<<" unit sq.";
    cout<<endl;
    return 0;
}