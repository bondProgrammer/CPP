#include<iostream>
using namespace std;
int fun(int a){
}

int fun(int *p){
}

int main()
{
//	cout<<"NULL="<<NULL;

	//cout<<"nullptr"<<nullptr;
	fun(nullptr);
int *p = nullptr;
cout<<*p;  
return 0;
} // predictable output
// Segmentation fault
