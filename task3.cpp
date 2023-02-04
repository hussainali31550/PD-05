#include<iostream>
using namespace std;
float calculater(float price,char code);
main()
{
  float price,result;
  char code;
  cout<<"Enter the price of vehicle";
  cin>>price;
  cout<<"Enter the code of vehicle in capital";
  cin>>code;
 result=calculater(price,code);
 cout<<"Your Final Price after tax: "<<result;
}
 float calculater(float price,char code)
{
 float taxamount,tprice;
 if(code=='M')
{ 
 float taxrate=0.06; 
 taxamount=(price*taxrate); 
 tprice=price+taxamount;
 
} 
 if(code=='E')
{
 
 float taxrate=0.08; 
 taxamount=(price*taxrate); 
 tprice=price+taxamount;
 
}
if(code=='S')
{
 
 float taxrate=0.1; 
 taxamount=(price*taxrate); 
 tprice=price+taxamount;
 
}
if(code=='V')
{
 float taxrate=0.12; 
 taxamount=(price*taxrate); 
 tprice=price+taxamount;
 
}  
if (code=='T')
{
 
 float taxrate=0.15; 
 taxamount=(price*taxrate); 
 tprice=price+taxamount;
  
}
 return tprice; 
}