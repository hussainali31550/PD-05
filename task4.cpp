#include<iostream>
using namespace std;
int time(int hours,int days,int workers);
main()
{
 int hours,days,workers;
 cout<<"Enter The Needed Hours:";
 cin>>hours;
 cout<<"Enter The days that you have:";
 cin>>days;
 cout<<"Enter the number of workers:";
 cin>>workers;
 time(hours,days,workers);
}
int time(int hours,int days,int workers)
{
  int totalhours,workinghours,remainhours,perdays;
  perdays=9;
  totalhours=days*24;
  workinghours=workers*days*perdays;
  remainhours=workinghours-hours;
  if(remainhours>hours)
{ remainhours=(remain hours);
  cout<<"YES!you have enough time:"<<remainhours;
} 
 if(remainhours<hours)
{remainhours=-(remain hours);
   cout<<"NOT,enough time: "<<remainhours;
 
}            
 



}