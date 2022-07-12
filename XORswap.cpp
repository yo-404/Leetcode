//program for swapping elements using XOR 
#include<iostream>
#include<bits.h>

using namespace std;

int main(){

    int a=4;
    int b=5;
      cout<<"a : "<<a<<endl;
    cout<<" b :"<<b<<endl;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout<<"Values after swapping using xor are :-"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<" b :"<<b;

    return 0;
}