#include<iostream>
using namespace std;
class Sample{
	private:
	int arr[3];
	public:   
	Sample(): arr{10,20,30}
	{
       	}

/*	Sample(){   // Array D.M init in ctor
	for(int i=0;i<3; i++){
	cout<<"\n In loop"<<endl;
		arr[i] =i;	
	}}//Array D.M init

*/	void Display()	{
	cout<<"\n Entered in display"<<endl;
		for(int i=0;i<3; i++){
		cout<<"\n"<<arr[i];	}
		}
};
int main()
{ 	Sample s;
	s.Display();
	return 0;
}	
