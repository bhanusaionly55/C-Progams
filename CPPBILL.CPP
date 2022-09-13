#include<iostream.h>
#include<conio.h>
class bill
{
long int x,p,c,b,s;
char y[10];
public :
void input ();
void display ();
};
void bill::input()
{
clrscr();
cout<<"Enter the consumer no:- "<<endl;
cin>>x;
cout<<"Enter the consumer name:- "<<endl;
cin>>y;
cout<<"Enter previous month reading:- "<<endl;
cin>>p;
cout<<"Enter current month reading:- "<<endl;
cin>>c;
cout<<"1.Domestic"<<endl<<"2.Commercial"<<endl<<"select the type:- "<<endl;
cin>>s;
}
void bill :: display()
{
b = c-p;
if (s == 1)
{
if (b <=100)
cout<<"The bill is:- "<<b;
if (b >100 && b<=200)
cout<<"The bill is:- "<<b*(2.5);
if (b>200&&b<500)
cout<<"The bill is:- "<<b*4;
if (b>500)
cout<<"The bill is:- "<<b*6;
}
if (s == 2)
{
if (b <=100)
cout<<"The bill is:- "<<b*2;
if (b >100 && b<=200)
cout<<"The bill is:- "<<b*(4.5);
if (b>200&&b<500)
cout<<"The bill is:- "<<b*6;
if (b>500)
cout<<"The bill is:- "<<b*7;
}
}
void main()
{
bill a;
a.input();
a.display();
getch();
}