#include<iostream.h>
#include<conio.h>
class matrix
{
	float **p;
	int r,c,j;
	public:
		matrix(int r1,int c1);
		void disp();
		~matrix();
}
matrix::matrix(int r1,int c1)
{
	r=r1;
	c=c1;
	p=new float *[r];
	for(int i=0;i<r;i++)
		p[i]=new float[c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter value:";
			cin>>p[i][j];
		}
	}
}
void matrix::disp()
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"\t"<<p[i][j];
		}
		cout<<endl;
	}
}
matrix::~matrix()
{
	cout<<"\n Destructor";
	for(int i=0;i<r;i++);
		delete p[i];
	delete p;
}
void main()
{
	int r,c;
	clrscr();
	cout<<"\n Enter No of rows & columns:";
	cin>>r>>c;
	matrix m(r,c);
	m.disp();
	getch();
}