#include<iostream.h>
#include<conio.h>
class result
{
	int rn;
	char nm[20];
	int m[3];
	int total;
	public:
		void get();
		void put();
};
void result :: get()
{
	cout<<"Enter roll no,name & marks of 3 subjects:";
	cin>>rn>>nm;
	total=0;
	for(int i=0;i<3;i++)
	{
		cin>>m[i];
		total +=m[i];
	}
}
void result::put()
{
	cout<<endl<<rn<<"\t"<<nm;
	for(int i=0;i<3;i++)
		cout<<"\t"<<m[i];
	cout<<"\t"<<total;
}
void main()
{
	result r[5];
	clrscr();
	for(int i=0;i<5;i++)
		r[i].get();
	cout<<"\n Roll no \t Name \t M1 \t M2 \t M3 \t Total";
	for(i=0;i<5;i++)
		r[i].put();
	getch();
}