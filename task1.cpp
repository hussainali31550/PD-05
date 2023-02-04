#include<iostream>
using namespace std;
float volume(int length,int width,int height,string unit);
main()
{
 int length,width,height;
 string unit;
 double result;
 cout<<"Enter The Length of the pyraimd"; 
 cin>>length;  
cout<<"Enter The Width of the pyraimd";  
cin>>width;
cout<<"Enter The height of the pyraimd";  
cin>>height;
cout<<"Enter The unit in which you want to measure";
cin>>unit;
result=volume(length,width,height,unit);
cout<<""<<result;
}
float volume(int length,int width,int height,string unit)
{
 string unit1;
 float volume,km,ml,cm;
 if(unit=="centimeter")
{             
 volume=(length*width*height)/3;
 cm=(100*100*100);
 volume=volume*cm;
 return volume;             
}                    
  if(unit=="kilometer")
{  
  volume=(length*width*height)/3;
  km=(1000*1000*1000);
  volume=volume/km;
  return volume;   
}       
if(unit=="milimeter")
{
 volume=(length*width*height)/3;
 ml=(1000*1000*1000);
 volume=volume*ml;
 return volume; 
}
 return 0;             
}   

