#include<iostream>
using namespace std;
class Rectangle
{
private:
    /* data */
    int length;
    int breadth;
public:
// int length;
// int breadth;
//!for assigning values of length and breadth
void Setlength(int l){
    if (l>=0)
        length=15;
    else
        length=0;    

}
int Getlength(){
    return length;
}
void Setbreadth(int b){
    if(b>=0){
        breadth=10;
    }
    else{
        breadth=0;
    }
}
int Getbreadth(){
    return breadth;
}
int area()
{
    return length*breadth;
}
int perimeter(){
    return 2*(length+breadth);
}
};
int main(){
    // !object created in stack
    Rectangle r;
    Rectangle *p;
    p=&r;
    // r.length=10;
    // r.breadth=5;
    // p->length=10;
    // p->breadth=10;
    r.Setlength(15);
    r.Setbreadth(10);
    cout<<p->area();
    //!object created in heap
        // Rectangle*p;
        // p=new Rectangle;
        // Rectangle*Q=new Rectangle();
        // p->length=15;
        // p->breadth=10;
        // cout<<p->area()<<endl;
        // cout<<p->length;
    }
