#include<iostream.h>
void main()
{  char c;
int isuppercase,islowercase;
cin>>c;
islowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
isuppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(isuppercase||islowercase)
{
cout<<"vevole";
else 
cout<<"constant";
}}
