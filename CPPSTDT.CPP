#include<iostream.h>
#include<conio.h>
class student
{
long int m1,m2,m3,t,a,k;
char x[50];
public :
void getdata ();
void calculate ();
void display ();
};
void student::getdata()
{
clrscr();
cout<<"Enter student name"<<endl;
cin>>x;
cout<<"Enter registration number"<<endl;
cin>>k;
cout<<"Enter three subject marks"<<endl;
cin>>m1>>m2>>m3;
}
void student :: calculate()
{
t = m1+m2+m3;
a = t/3;
}
void student::display()
{
cout<<"Student name:- "<<x<<endl<<"Reg no:- "<<k<<endl;
cout<<"subject 1:- "<< m1<<endl<<"subject 2:- "<<m2<<endl<<"subject 3:- "<<m3<<endl<<"total:- "<<t<<endl<<"Average:- "<<a<<endl;
if(a>90)
cout<<"Grade:- S";
if(a<90 && a>80)
cout<<"Grade:- A";
if(a<80 && a>70)
cout<<"Grade:- B";
if (a<70 && a>70)
cout<<"Grade:- C";
}
void main()
{
student a;
a.getdata();
a.calculate();
a.display();
getch();
}