#include<iostream>
#include <stdio.h> 
#include <stdarg.h>
using namespace std;
class Shape
{
public:

//parameter function with int type argument
void parameter(int a)
{
cout<<"\nPerimeter of square = "<<4*a;
}

//parameter function with two int type arguments
void parameter(int a,int b)
{
cout<<"\nPerimeter of rectangle = "<<(2*a+2*b);
}

//parameter function with float type argument
void parameter(double r)
{
cout<<"\nPerimeter of circle = "<<2*3.14*r;
}
};
int main()
{
Shape sh;
sh.parameter(3);
sh.parameter(2,3);
sh.parameter(2.5);
return 0;
}