#include<bits/stdc++.h>
using namespace std;

class Shape // virtual base class
{
    public:
    virtual void draw() const {
        cout<<"Drawing a Shape"<<endl;
    }
};

// Derived Class
class Circle : virtual public Shape{
    public:
    void draw() const override{
        cout<<"Drawing a Circle"<<endl;
    }
};

// derived class
class Square: virtual public Shape{
    public:
    void draw() const override{
        cout<<"Drawing a Square"<<endl;
    }
};

// Derived class inheriting from both class circle and square
class Ellipse: public Circle, public Square{
    public:
    void draw() const override{
        cout<<"Drwaing an Ellipse"<<endl;
    }
};

int main(){
    Ellipse ellipse;
   // Circle ok;
    ellipse.draw();
    // call the draw function from the virtual base class
    ellipse.Shape::draw();
    ellipse.Circle::draw();
    return 0;
}