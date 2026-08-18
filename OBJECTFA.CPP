#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"\n Enter two number:";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
		void swap1(A a1)
		{
			int c=a1.a;
			a1.a=a1.b;
			a1.b=c;
		}
		void swap2(A&a1)
		{
			int c=a1.a;
			a1.a=a1.b;
			a1.b=c;
		}
		void swap3(A*a1)
		{
			int c=a1->a;
			a1->a=a1->b;
			a1->b=c;
		}
		void swap4(const A&a1)
		{
			cout<<"\n a="<<a1.a<<"\t b="<<a1.b;
		}
		void swap5(const A*a1)
		{
			cout<<"\n a="<<a<<a1->a<<"\t b="<<a1->b;
		}
};
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();
	a1.swap1(a1);
	cout<<"\n After swap1 pass by value:";
	a1.put();

	a1.swap2(a1);
	cout<<"\n After swap2 pass by reference:";
	a1.put();

	a1.swap3(&a1);
	cout<<"\n After swap3 pass by pointer:";
	a1.put();

	a1.swap4(a1);
	cout<<"\n After swap4 pass by const reference:";
	a1.put();

	a1.swap5(&a1);
	cout<<"\n After swap5 pass by const pointer:";
	a1.put();
	getch();
}


