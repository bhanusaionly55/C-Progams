#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
long int f,a,x,q,z=0,s,r;
cout<<"Select the choice"<<endl<<"1.String palindrom"<<endl<<"2.number palindrome"<<endl;
cin>>a;
switch(a)
{
case 1:
cout<<"Enter the string"<<endl;
cin>>f;
r = reverse(f);
if(r == f)
cout<<"It is a palindrome";
else
cout<<"It is not a palindrome";
break;
case 2:
cout<<"Enter the number"<<endl;
cin>>x;
s=x;
while(x>0)
{
q=x%10;
z=z*10+q;
x=x/10;
}
if(s==z)
cout<<"It is a palindrome";
else
cout<<"It is not a palindrome";
break;
}
getch();
}
