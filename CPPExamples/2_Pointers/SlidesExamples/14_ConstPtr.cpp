#include<iostream>
using namespace std;
int main(){
const int k = 20;
const int *p = &k;
cout<<*p<<endl;
//k = k+1;
//p = nullptr;// can  not be changed
//p = p+1; // can  not be changed
*p =100; // Can be changed	 
cout<<*p<<endl;
return 0;
} // Red colour indicate error
