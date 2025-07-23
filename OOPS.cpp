#include<iostream>
using namespace std;
class Rectangle
{
private:
    /* data */
    // int length;
    // int breadth;
public:
int length;
int breadth;
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
    // Rectangle r;
    // Rectangle *p;
    // p=&r;
    // r.length=10;
    // r.breadth=5;
    // p->length=10;
    // p->breadth=10;
    // cout<<p->area();
    //! object created in heap
        Rectangle*p;
        p=new Rectangle;
        Rectangle*Q=new Rectangle();
        p->length=15;
        p->breadth=10;
        cout<<p->area()<<endl;
        cout<<p->length;
    }
