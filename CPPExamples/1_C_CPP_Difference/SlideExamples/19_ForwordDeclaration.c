 #include<stdio.h>
 void func1()
 {
	printf("\n func1 called");
	func2();
 }
 void func2()
 {
	printf("\n func2 called");
 }
 int main()
 {
	 printf("\n main called");
	 func1();
	 return 0;
 }