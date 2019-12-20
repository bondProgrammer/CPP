 #include<iostream>
 using namespace std;
 void func1()
 {
	cout<<"\n func1 called";
	func2();
 }
 void func2()
 {
	cout<<"\n func2 called";
 }
 int main()
 {
	 cout<<"\n main called";
	 func1();
	 return 0;
 }