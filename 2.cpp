#include<iostream>
using namespace std;
class Quadrilateral{
    public:


};
class Trapezoid:public Quadrilateral{
    public:
    int area_trap(int a, int b, int h){
        return (a+b)*h/2;
    }
    int per_trap(int s1, int s2, int s3, int s4){
        return s1+s2+s3+s4;
    }
};
class Parallelogram:public Quadrilateral{
    public:
    int area_para(int base, int height){
        return base*height;
    }
    int per_para(int a, int b){
        return 2*(a+b);
    }
};
class Square:public Quadrilateral{
    public:
    int area_sq(int s){
        return s*s;
    }
    int per_sq(int a){
        return 4*a;
    }
};
class Rectangle:public Quadrilateral{
    public:
    int area_rect(int l, int b){
        return l*b;
    }
    int per_rect(int l, int b){
        return 2*(l+b);
    }
};
int main(){
    Trapezoid t;
    cout<<"Area of trapezoid : "<<t.area_trap(2,3,4)<<endl;
    cout<<"Perimeter of trapezoid : "<<t.per_trap(3,4,5,2)<<endl;
    Parallelogram p;
    cout<<"Area of Parallelogram : "<<p.area_para(2,3)<<endl;
    cout<<"Perimeter of tParallelogram: "<<p.per_para(5,2)<<endl;
    Square s;
    cout<<"Area of square : "<<s.area_sq(2)<<endl;
    cout<<"Perimeter of square : "<<s.per_sq(3)<<endl;
    Rectangle r;
    cout<<"Area of rectangle : "<<r.area_rect(2,4)<<endl;
    cout<<"Perimeter of rectangle : "<<r.per_rect(3,4)<<endl;
    return 0;
}


