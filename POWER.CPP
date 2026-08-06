#include<iostream.h>
#include<conio.h>
void main()
{
	int base,power,result=1;
	clrscr();
	cout<<"Enter base no:";
	cin>>base;
	cout<<"Enter power no:";
	cin>>power;
	for(int i=1;i<=power;i++)
	{
		result=result*base;
	}
	cout<<"Answer:"<<result;
	getch();
}