#include<iostream>
using namespace std;
int valid(char *name){
    int i;
    for(i=0;name[i]!='\0';i++){
        if ((!name[i]>=65&&name[i]<=90)&&!(name[i]>=97&&name[i]<=122))
        {
            /* code */return 0;
        }
        return 1;
        
        
    }
}
int main(){
    char *name[]="Naman";
    if(valid(name)){
        cout<<"valid string";
    }
    else{
        cout<<"invalid string";
    }
}