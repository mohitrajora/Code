#include<iostream>
using namespace std;

class circle{
    private:
        const float pi = 3.14519;
    public:
        double redius;
    circle(double r) : redius(r){}
    double area() const {
        return pi*redius*redius;
    }
};

int main()
{
    circle c1(5.0);
    // c1.pi=3.14;
    cout<<"Area : "<<c1.area()<<endl;
    return 0;
}
