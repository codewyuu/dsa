
 //give an integer n return true if it is power of two otherwise return false, an integer is a power of two if there exits an integer  x scch that n=2^n
 #include<iostream>
 using namespace std;
 bool isPowerOfTwo(int n){
     if (n==0){
         return false;
     }
     while(n!=1){
         if (n%2!=0){
             return false;
         }
         n=n/2;
     }
     return true;
 }
