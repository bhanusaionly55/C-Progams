#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,j;
cout<<"Enter the number of lines"<<endl;
cin<<a;
for (i=1;i<=a;i++)
for (j=1;j<=i;j++)
cout<<"*";
getch();
}