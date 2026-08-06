#include<iostream.h>
#include<conio.h>
int add(int x,int y=20);
void main()
{
	int x,y,z;
	clrscr();
	cout<<"\n Enter two numbers:";
	cin>>x>>y;
	z=add(x,y);
	cout<<"\n Sum without default:"<<z;
	z=add(x);
	cout<<"\n Sum with default:"<<z;
	getch();
}
int add(int x,int y)
{
	return (x+y);
}