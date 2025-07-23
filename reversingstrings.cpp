#include<iostream>
using namespace std;
int main(){
    /*char s[]="welcome";
    int i;
    for(i=0;i!='\0';i++){
        printf("%c",i);
    }*/
   char A[]="PYTHON";
//    char t;
//    int i,j;
//    for(j=0;A[j]!='\0';j++){
//    }
//    j=j-1;
//    for(i=0;i<j;i++,j--){
//     t=A[i];
//     A[i]=A[j];
//     A[j]=t;
//    }
//    cout<<A;
    char B[7];
    int i,j,n;
    for ( i = 0;A[i] !='\0'; i++)
    {
    }
    i=i-1;
    for(j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    B[j]='\0';
    cout<<B;
    
}