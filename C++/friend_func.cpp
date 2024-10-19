#include<bits/stdc++.h>
using namespace std;

// Forward declaration of friend function
void displayinfo(const class Student&);

class Student
{
    private:
    string name;
    int roll_no;
    float gpa;
    static int total_students; // static member variable see on gfg for more...

    public:
    // Constructer
    Student(string n,int roll,float g)
    {
        name=n;
        roll_no=roll;
        gpa=g;
        total_students++;
    }

    static void displaytotal_students()
    {
        cout<<"Total Students : "<<total_students<<endl;
    }

    // Member Function using this pointer
    void display_address()
    {
        cout<<"Address of the current object : "<<this<<endl;
    }
    
    // Friend Function Declaration
    friend void displayinfo(const Student&);
};

int Student::total_students =0;

// Friend function defination
void displayinfo(const Student& s)
{   
    cout<<"Name : "<<s.name<<endl;
    cout<<"Roll No : "<<s.roll_no<<endl;
    cout<<"GPA : "<<s.gpa<<endl;
}

int main()
{
    Student s1("Mohit Rajora",12345,4.32);
    displayinfo(s1);

    Student::displaytotal_students();
    s1.display_address();

    return 0;
}