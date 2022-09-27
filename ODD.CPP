#include<iostream.h>
#include<conio.h>
class even_odd
{
int x;
public:void get(int p)
{
x=p;
}
void show()
{
if(x%2==0)
{
cout<<"no.is even";
}
else
{
cout<<"no.is odd";
}
}
};
void main()
{
clrscr();
even_odd e1;
int s;
cout<<"enter no. is=";
cin>>s;
e1.get(s);
e1.show();
getch();
}






