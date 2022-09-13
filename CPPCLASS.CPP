#include<iostream.h>
#include<conio.h>
class add
{
int x,y;
public :
void input ();
void display ();
};
void add::input()
{
cout<<"Enter x and y values"<<endl;
cin>>x>>y;
}
void add :: display()
{
cout<<"sum of two numbers is:- "<<x+y;
}
void main()
{
add a;
a.input();
a.display();
getch();
}       ]



