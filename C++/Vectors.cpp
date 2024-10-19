#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    } // Simply print 1 2 3

    vector<int>::iterator it; // this is a pointer that name is 'it' i give it
    for(it=v.begin();it!=v.end();it++){ //it will start from 1st element of vector and the conditon is whenever 
        cout<<*it<<endl;               // the value is not eqal to the last it will continue
    }// 1 2 3

    for(auto element:v){ // the auto keyword automatically decide thw type of the data...
        cout<<element<<endl;
    }// 1 2 3

    v.pop_back(); // remove the last element in vector so the o/p is 1 2

    vector<int> v2 (2,15); // the first number 2 is the total number of element and the second number is 15 is the value.
    // it will print 15 15

    swap(v,v2); // it will swap the values of v and v2 vector among them.

    for(auto element:v){
        cout<<element<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;
    }

    sort(v.begin(),v.end());
    return 0;
}