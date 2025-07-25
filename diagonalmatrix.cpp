#include<iostream>
using namespace std;
class diagonal{
    private:
    int*a;
    int n;
    public:
    diagonal(){
        n=2;
        a=new int[2];
    }
    diagonal(int n){
        this->n=n;
        a=new int[n];
    }
    void set(int i , int j, int x);
    int get(int i ,int j);
    void display();
    ~diagonal(){
        delete []a;
    }
};
void diagonal::set(int i , int j, int x){
    if(i==j)
    a[i-1]=x;
}
int diagonal::get(int i, int j){
    if(i==j) return a[i-1];
    else return 0;
}
void diagonal::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                cout<<a[i-1];
            else 
                cout<<"0";
        }
        cout <<endl;
    }
}
int main(){
    diagonal d(4);
    d.set(1,1,5);
    d.set(2,2,3);
    d.set(3,3,9);
    d.set(4,4,12);
    d.display();
    return 0;
}
