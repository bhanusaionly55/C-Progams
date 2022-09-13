#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"Enter the age"<<endl;
cin>>a;
if(a>0)
{
if(a>=18)
cout<<"Eligible for voting";
else
cout<<"El]igible after "<<18-a<<" years";
}
else
cout<<"Enter the correct age";
getch();
}