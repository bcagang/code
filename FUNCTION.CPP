#include<iostream.h>
#include<conio.h>
float area (int);
int area (int,int);
void main()
{
clrscr();
int r;
cout<<"Enter radius of circle";
cin>>r;
float A=area(r);
cout<<"Area of a circle is"<<A<<endl;
int l,b,a;
cout<<"Enter length and width of rectangle";
cin>>l>>b;
a=area(l,b);
cout<<"area of rectengle is "<<a;
getch();
}
float area(int R)
{
return(3*R*R);
}
int area(int L,int B)
{
return(L*B);
}