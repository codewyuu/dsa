#include<iostream>
using namespace std;
int c=69;
int main(){
    int a,b,c;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum is: "<<c<<endl;
    cout<<"the value of global c is "<<::c<<endl; //:: <-- this is scope resolution operator and gives the value of global variable.
    
    float d=34.4; //can pass value of a float as for an example 34.4f
    long double e= 34.4;//similarly for long double 34.4l, this will later help us in fxn overloading
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
    return 0;

}

#include<iostream>
using namespace std;
int c=32;
int main(){
    int a,b,c;
    cout<<"value of a is:\n";
    cin>>a;
    cout<<"value of b is:\n";
    cin>>b;
    c=a+b;
    cout<<"the sum is: "<<c;
    return 0;
}