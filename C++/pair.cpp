#include<iostream>
#include<vector>
#include<algorithm> // for 'sort' function
using namespace std;

bool myCompare(pair<int, int>p1, pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){

    // pair <int,char> p;
    // p.first=3;
    // p.second='g';

    int arr[]={65,4,2,43,53,21,12,5}; 
    vector<pair<int, int>> v;

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        v.push_back(make_pair(arr[i],i));
    }

    sort(v.begin(), v.end(), myCompare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }

    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// it will print that in which number after sorting the values are gone like 65 is the biggest among them so it will go in last which 
// is 7th number so the output will be 7 and the 4 is second smallest so it will go in number 2 so output till is 7 2... it will continue for every element.