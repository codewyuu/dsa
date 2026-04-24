//pat1
#include<iostream>
using namespace std;
int main(){
    int n= 5;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
//pat2
#include<iostream>
using namespace std;
int main(){
    int n= 5;
    for (int i=0; i<=n; i++){
        for (int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
//pat3
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for (int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//pat3
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=n;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//pat4
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=n;i>=1;i--){
        for(int s=1;s<=(n-i)*2;s++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//pat5
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std ;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
//now if we want to reverse the number s as well we can do tha by changing the inner loop of j