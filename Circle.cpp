#include "Circle.h"
#include <iostream>
using namespace std;
void Circle::Nhap()
{   cout<<"Nhap Toa Do Tam(X;Y) :\n";
    cin>>X>>Y;
    cout<<"Nhap Ban Kinh R:\n";
    cin>>R;
    cout<<"Hinh Tron Tam ("<<X<<";"<<Y<<")\n";
}
void Circle::Area()
{
    cout<<"Dien Tich Hinh Tron la : "<<R*R*PI<<" Don vi Dien Tich"<<endl;

}
void Circle::Perimeter()
{
    cout<<"Chu Vi Hinh Tron la : "<<R*2*PI<<" Don vi Do Dai"<<endl;

}
