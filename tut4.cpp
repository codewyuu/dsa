#include<iostream>
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"this is tut4. here the value of a is "<<a <<". the value of b is "<<b;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    float pi=3.14;
    cout<<"the value of pi is "<<pi;
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int a=4, b=5;
    float pi=3.14;
    char c='d';
    cout<<"this is tut4.\nhere the value of a is "<<a <<".\nthe value of b is "<<b;
    cout<<"\nthe value of c is "<<c;
    cout<<"\nthe value of pi is: "<<pi;
    return 0;
}

//scope priority (global or loacal, usually when local and global both have the same values, local scope is preferred)
#include<iostream>
using namespace std;
int glo=6;

int main(){
    int glo=10;
    //glo=11; (local variable got updated here).
    cout<<glo;
    bool is_true= true; //
    cout<<glo<<is_true; //(here we got the output as 10101 as the initial 10 was for the first cout statement and then we said cout again with glo whose value was again 10 so 1010 and as bool was true so it gave output as 1 and as there is no line break so the output becomes 10101).
    return 0;
}
