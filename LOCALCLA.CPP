#include<iostream.h>
#include<conio.h>
void test();
void main()
{
	clrscr();
	test();
	getch();
}
void test()
{
	int x=10;
	class A
	{
		int a;
		public:
			void get()
			{
				cout<<"\n Enter a:";
				cin>>a;
			}
			void put()
			{
				cout<<"\n a="<<a;
				cout<<"\n x="<<x;
			}
	};
	A a1;
	a1.get();
	a1.put();
}