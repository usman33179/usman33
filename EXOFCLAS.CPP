#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	float b;
	char c;
	void get();
	public:
		void put()
		{
			get();
			cout<<"\n A="<<a;
			cout<<"\n B="<<b;
			cout<<"\n C="<<c;
		}
};
void demo ::get()
{
	cout<<"\n Enter an int A float B and char C:";
	cin>>a>>b>>c;;
}
void main()
{
	demo d1;
	clrscr();
	d1.put();
	getch();
}