#include<iostream.h>
#include<conio.h>
void main()
{
	int num,count=0;
	clrscr();
	cout<<"Enter integer no:";
	cin>>num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	cout<<"number of digits:"<<count;
	getch();
}