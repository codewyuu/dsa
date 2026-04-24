#include<iostream> //system header file
using namespace std;

int main(){
    cout<<"mike\n"; // or std::cout<< this is used when we are not using the std keyword in the using namespace line;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    cout<<"operators in cpp:"<<endl; //endl can be used instead of "\n"
    return 0;
}

//ADDITION
#include<iostream>
using namespace std;
int main(){
    int a=5, b=5;
    //arithmetic ops
    cout<<"operators in c++:\n";
    cout<<"following are the types of operators in cpp with examples\n";
    cout<<"the value of a+b is :"<<a+b<<endl;
    cout<<"the value of a-b is :"<<a-b<<endl;
    cout<<"the value of a*b is :"<<a*b<<endl;
    cout<<"the value of a/b is :"<<a/b<<endl;
    cout<<"the value of a%b is :"<<a%b<<endl;
    cout<<"the value of a++ is :"<<a++<<endl;
    cout<<"the value of a-- is :"<<a--<<endl;
    cout<<"the value of b++ is :"<<b++<<endl;
    cout<<"the value of b-- is :"<<b--<<endl;
    cout<<"the value of ++a is :"<<++a<<endl;
    cout<<"the value of --a is :"<<--a<<endl;
    //comparison operators
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    //logical operators
    cout<<"following are the logical operators in cpp "<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;

    //logical operators
    cout<<"following are the logical operators in c++ "<<endl;
    cout<<"the value of the logical operator ((a==b) cout&& (a<b)) is "<<((a==b)&&(a<b))<<endl;
    cout<<"the value of the logical operator ((a==b)||(a<b)) is "<<((a==b)||(a<b))<<endl;
    cout<<"the value of the logical operator (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;

}

