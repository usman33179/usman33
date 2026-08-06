#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			cout<<""<<k++;
		}
		cout<<endl;
	}
	getch();
}