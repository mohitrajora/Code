#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    vector<int>:: iterator it = v.begin();
    for(int i = 0;i<v.size();i++){
        cout<<(*it+i)<<" ";
    }

    return 0;
}