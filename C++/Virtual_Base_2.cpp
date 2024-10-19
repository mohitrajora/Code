#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_roll(int r){
            roll_no=r;
        }
        void show_roll(void){
            cout<<"Roll No is: "<<roll_no<<endl;
        }
};

class test : virtual public student{
    protected:
        int maths,physics;
    public:
        void set_marks(int m,int p){
            maths=m;
            physics=p;
        }
        void show_marks(void){
            cout<<"Maths : "<<maths<<endl<<"Physics : "<<physics<<endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float s){
            score=s;
        }
        void show_score(void){
            cout<<"Score : "<<score<<endl;
        }
};

class result : public test, public sports{
    private: 
        float total;
    public:
        void show(void){
            total=maths+physics+score;
            show_roll();
            show_marks();
            show_score();
            cout<<"Total Score is : "<<total;
        }
};

int main(){
    result kisu;
    kisu.set_roll(21);
    kisu.set_marks(89,94);
    kisu.set_score(8.8);
    kisu.show();
    return 0;
}