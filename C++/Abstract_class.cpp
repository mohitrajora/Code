#include<iostream>
using namespace std;

class animal{
    public:
        virtual void makesound()=0; // Pure virtual function 
};

class dog : public animal{
    public:
        void makesound(){               // defination of pure virtual function
            cout<<"Dog Barks "<<endl;
        }
};

class cat : public animal{
    public :
        void makesound(){               // defination of pure virtual function
            cout<<"Cat Meows "<<endl;
        }
};

int main(){
    dog d1; 
    cat c1;
    c1.makesound();
    d1.makesound();
    return 0;
}