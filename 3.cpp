#include<iostream>
using namespace std;
class shape {
public:
};
class TwoDshape : public shape {
public:};
class Square : public TwoDshape {
    public:
    int calculateArea(int s){
        return s*s;
    }
};
class Rectangle:public TwoDshape{
    public:
    int calculateArea(int a, int b){
        return a*b;
    }
};
class ThreeDshape: public shape {
public:
};
class Sphere : public ThreeDshape {
    public:
    int calculateArea(int r) {
        return 4/3*3.14*r*r*r;
    }
};
int main(){
    Rectangle r;
    cout<<"Area of Rectangle : "<<r.calculateArea(4,3)<<endl;
    Square s;
    cout<<"Area of Square : "<<s.calculateArea(4)<<endl;
    Sphere s1;
    cout<<"Area of Sphere : "<<s1.calculateArea(4)<<endl;
    return 0;
}

