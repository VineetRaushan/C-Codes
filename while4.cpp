/* n numbers are given draw f to c degree table*/
#include<iostream>
using namespace std;
int main()
{
 float i,n;
 float c;
 i=1;
 cin>>n;
 while (i<=n)
 {
   c=(i-32)*5/9;
   i=i+1;
   cout<<"for"<<""<<i<<"in fahrenhiet the tempreature in celcius is"<<""<<c<<endl;
 }
    
 return 0;
} 