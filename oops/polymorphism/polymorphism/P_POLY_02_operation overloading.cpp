//polymorphism with operation overloading

#include<iostream>
using namespace std;

class complex
{
	private:int real, imaginery;
	public:
		complex(int r=0, int i=0)
		{
			real = r;
			imaginery = i;
		}
		complex operator + (complex const &obj)
		{
			complex res;
			res.imaginery = imaginery + obj.imaginery;
			res.real = real + obj.real;
			return res;
		}
		void display()
		{
			cout<<real<<" +i"<<imaginery<<endl;
		}
};

int main()
{
	complex c1(12,7);
	complex c2(6,7);
	complex c3= c1 + c2;
	c3.display();
	return 0;
}

//output 

// 18+i14 (12+6 = 18, 7+7=14)
