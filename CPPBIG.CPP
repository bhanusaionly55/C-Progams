#include<iostream.h>
#include<conio.h>
class big
{
int x,y;
public :
void input ();
void display ();
};
void big::input()
{
clrscr();
cout<<"Enter x and y values"<<endl;
cin>>x>>y;
}
void big :: display()
{
if (x>y)
cout<<"Biggest of two numbers is:- "<<x;
else
cout<<"biggest if two numbers is:- "<<y;
}
void main()
{
big a;
a.input();
a.display();
getch();
}