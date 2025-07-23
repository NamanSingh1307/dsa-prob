#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    v.push_back(6);
    v.push_back(7);
    v.pop_back();
    //METHOD 1
    // for (int x:v)
    // cout <<x <<endl;
    //METHOD 2
    vector<int>::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    cout<<++ *itr<<endl;

}