//inheritence examples
//
//single inheritence
//class A is base class
//class B is derieved class

//defination: when only 1 class is derieved from a single base class.

class A
{
	public:
		void func()
		{
			cout<<"inherited";
		}
};

class B : public A
{
	
};

int main ()
{
	B b;
	b.func();
}

//output intherited (will be printed)



//multiple inheritence
//when a single derieved class is derieved from more than 1 parent (two base clases)

class A
{
	public:
		{
			void Afunc()
			{
				cout<<"Func A"<<endl;
			}
		}
};

class B
{
	public:
		{
			void Bfunc()
			{
				cout<< " func B"<<end;
			}
		}
};

class C : public A, public B
{
  public:
  {
	  }	
};

int main(){

C c;
c.Afunc();
c.Bfunc();

}


//multilevel inheritance
//when a derieved class is derieved from 1 base class and that derieved class is derieved from other derieved class.


class A
{
	public:
		{
			void Afunc()
			{
				cout<<" function A"<<endl;
			}
		}
};

class B : public A
{
    public:
		{
			void Bfunc()
			{
				cout<<" function B"<<endl;
			}
		}	
};

class C : public B
{
	public:
		{
		}
};

int main(){
C c;
c.Afunc();
c.Bfunc();
}


//Hybrid inheritance

//it is a combination of hiarchiel and multilevel inheritance

//hiarchiel inheritance

//when a single base class derieves more than 1 base class then it is called hiarcheil inheritance

































