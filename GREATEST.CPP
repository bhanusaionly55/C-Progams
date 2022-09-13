#include<
iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enterf three numbers:- ";
cin>>a>>b>>c;
if (a>b&&a>c)
cout<<a <<"is greatest number";
else if (b>c)
cout<<b <<"is greatest number";
else
cout<<c <<"is greatest number";
getch();
}