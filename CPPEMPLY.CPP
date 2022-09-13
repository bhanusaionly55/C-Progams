#include<iostream.h>
#include<conio.h>
class emp
{
long int x,y,b,d,h,p,g;
char n[10],a[10];
public :
void input ();
void display ();
};
void emp::input()
{
clrscr();
cout<<"Enter the employee name:- "<<endl;
cin>>n;
cout<<"Enter the employee id:- "<<endl;
cin>>x;
cout<<"Enter the employee address:- "<<endl;
cin>>a;
cout<<"Enter the employee number:- "<<endl;
cin>>y;
cout<<"Enter the basic pay of employee:- "<<endl;
cin>>b;
}
void emp :: display()
{
d = b*97/100;
h = b*10/100;
p = b*12/100;
g = b+d+h+p;
cout<<"The gross salary of the employee is:- "<<g;
}
void main()
{
emp a;
a.input();
a.display();
getch();
}