#include<iostream>
using namespace std;

class animal{
    public:
        virtual void makesound(){
            cout<<"Animal Make Sound "<<endl;
        }
};

class dog : public animal{
    public:
        void makesound(){
            cout<<"Dog Barks"<<endl;
        }
};

class cat : public animal{
    public:
        void makesound(){
            cout<<"Cat Mewos"<<endl;
        }
};

int main(){
    animal* zoo[]={new dog(),new cat()};
    for(int i=0;i<2;i++){
        zoo[i]->makesound();
    }
    for(int i=0;i<2;i++){
        delete zoo[i];
    }  
    return 0;
}

