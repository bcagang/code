#include<iostream.h>
#include<conio.h>
struct student
{
int id;
char*name[];
float result;
};
void main()
{
struct student s1;
s1.id=101;
s1.name=aayushi mukati;
s1.result="55.5";
cout<<"student id="<<s1.id;
cout<<"student name="<<s1.name;
cout<<"student result="<<s1.result<<"%";
getch();
}