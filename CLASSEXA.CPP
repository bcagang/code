#include<iostream.h>
#include<conio.h>
class person
{
public: char*name;
int age;
char*gender;
};
void main()
{
clrscr();

person a;
a.name="rit";
a.age=24;
a.gender="female";
cout<<"name="<<a.name<<endl;
cout<<"age="<<a.age<<endl;
cout<<"gender="<<a.gender<<endl;
getch();
}