#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int i,star,moon,rocket;
 clrscr();
 getch();
 //Stars Start
 delay(70);
 for(star=1; star<=49; star++)
 {
  delay(70);
  cout<<"*   *   *    ";
 }
 //Stars End
 //Moon Start
 delay(100);
  for(moon=1; moon<=5; moon++ )
  {
   delay(100);
   for(i=4; i>=moon; i-- )
    cout<<"  ";
   for(i=2; i<=moon*2-1; i++ )
    cout<<" O";
    cout<<endl;
  }//Moon 2d half
  for(moon=5; moon>=1; moon-- )
  {
   delay(100);
   for(i=4; i>=moon; i-- )
    cout<<"  ";
   for(i=2; i<=moon*2-1; i++ )
    cout<<" O";
    cout<<endl;
  }
  //Moon End
  //Rocket Star
	//rocket Top
  delay(100);
  for(rocket=1; rocket<=3; rocket++ )
  {
   delay(500);
   cout<<"\t";
   for(i=2; i>=rocket; i-- )
    cout<<"  ";
   for(i=1; i<=rocket*2-1; i++ )
    cout<<" O";
    cout<<endl;
  }
	//Rocket Middle
  for(i=1;i<=10;i++)
  {
   delay(500);
   cout<<"\t O O O O O";
   cout<<endl;
  }
	//rocket bottum
  for(rocket=1; rocket<=5; rocket++)
  {
   delay(500);
   for(i=4;i>=rocket;i--)
   cout<<"  ";
   for(i=1;i<=rocket; i++)
   cout<<" 1";
   for(i=1;i<=3; i++)
   cout<<" 1";
   for(i=1;i<=rocket; i++)
   cout<<" 1";
   cout<<endl;
  }
  cout<<endl;
	//Rocket Burner
  for(rocket=1; rocket<=7; rocket++)
  {
  delay(500);
    cout<<" |  |  |  |  |  |  |  |  | "<<endl;
  delay(500);
    cout<<"   |  |  |  |  |  |  |  |  "<<endl;
  }
  //Rocket End
  getch();
 }

 
3 #include<iostream.h> 
4 #include<conio.h> 
5 #include<dos.h> 
6 void main() 
7 { 
8  int i,star,moon,rocket; 
9  clrscr(); 
10  getch(); 
11  //Stars Start 
12  delay(70); 
13  for(star=1; star<=49; star++) 
14  { 
15   delay(70); 
16   cout<<"*   *   *    "; 
17  } 
18  //Stars End 
19  //Moon Start 
20  delay(100); 
21  for(moon=1; moon<=5; moon++ ) 
22  { 
23   delay(100); 
24   for(i=4; i>=moon; i-- ) 
25    cout<<"  "; 
26   for(i=2; i<=moon*2-1; i++ ) 
27    cout<<" O"; 
28    cout<<endl; 
29  }//Moon 2d half 
30  for(moon=5; moon>=1; moon-- ) 
31  { 
32   delay(100); 
33   for(i=4; i>=moon; i-- ) 
34    cout<<"  "; 
35   for(i=2; i<=moon*2-1; i++ ) 
36    cout<<" O"; 
37    cout<<endl; 
38  } 
39  //Moon End 
40  //Rocket Star 
41 	//rocket Top 
42  delay(100); 
43  for(rocket=1; rocket<=3; rocket++ ) 
44  { 
45   delay(500); 
46   cout<<"\t"; 
47   for(i=2; i>=rocket; i-- ) 
48    cout<<"  "; 
49   for(i=1; i<=rocket*2-1; i++ ) 
50    cout<<" O"; 
51    cout<<endl; 
52  } 
53 	//Rocket Middle 
54  for(i=1;i<=10;i++) 
55  { 
56   delay(500); 
57   cout<<"\t O O O O O"; 
58   cout<<endl; 
59  } 
60 	//rocket bottum 
61  for(rocket=1; rocket<=5; rocket++) 
62  { 
63   delay(500); 
64   for(i=4;i>=rocket;i--) 
65   cout<<"  "; 
66   for(i=1;i<=rocket; i++) 
67   cout<<" 1"; 
68   for(i=1;i<=3; i++) 
69   cout<<" 1"; 
70   for(i=1;i<=rocket; i++) 
71   cout<<" 1"; 
72   cout<<endl; 
73  } 
74  cout<<endl; 
75 	//Rocket Burner 
76  for(rocket=1; rocket<=7; rocket++) 
77  { 
78  delay(500); 
79    cout<<" |  |  |  |  |  |  |  |  | "<<endl; 
80  delay(500); 
81    cout<<"   |  |  |  |  |  |  |  |  "<<endl; 
82  } 
83  //Rocket End 
84  getch(); 
85 } 
