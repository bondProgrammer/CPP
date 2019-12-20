#include<iostream>
using namespace std;

class Test
{
	private:
		const int size;

	public:
		Test(int d):size(d)
		{
		}
};


int main(){
	Test t1(10), t2(30);
	return 0;
}




