#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr();
 cout<<" value:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i+1;j++)
  {
   cout<<" *";
  }
  cout<<" \n";
 }
 getch();
}